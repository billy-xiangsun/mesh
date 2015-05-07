#ifndef MESHOBJECT_H
#define MESHOBJECT_H

#include <Eigen/Core>

#include <OpenMesh/Core/IO/MeshIO.hh>   // Must be included before mesh kernel
#include <OpenMesh/Core/Mesh/PolyMesh_ArrayKernelT.hh>


class Renderer;

struct MyTraits : public OpenMesh::DefaultTraits
{
    VertexAttributes(OpenMesh::Attributes::Status | OpenMesh::Attributes::Normal);
    FaceAttributes(OpenMesh::Attributes::Status | OpenMesh::Attributes::Normal);
    EdgeAttributes(OpenMesh::Attributes::Status);

    FaceTraits
    {
      private:
        bool integrated_;
        Eigen::Vector3d u_, v_;
        Point centroid_;

      public:
        FaceT() : integrated_(false) {}

        bool integrated() const {return integrated_;}
        Eigen::Vector3d rel_principal_u() const {return u_;}
        Eigen::Vector3d rel_principal_v() const {return v_;}
        void set_integrated(bool status) {integrated_ = status;}
        void set_rel_principal_dirs(const Eigen::Vector3d &u, const Eigen::Vector3d &v) {u_ = u; v_ = v;}
        Point centroid() const {return centroid_;}
        void set_centroid(const Point &pt) {centroid_ = pt;}
    };

    EdgeTraits
    {
      private:
        double weight_;

      public:
        EdgeT() : weight_(0) {}

        double weight() const {return weight_; }
        void set_weight(double weight) {weight_ = weight;}
    };

    VertexTraits
    {
      private:
        double load_;
        double violation_;
        unsigned char flags_;

    public:
        enum VertexFlags {
            VF_NONE = 0,
            VF_ANCHORED = 1,
            VF_PINNED = 2,
            VF_HANDLED = 4,
            VF_OUTENVELOPE = 8
        };

        VertexT() : load_(0), violation_(0), flags_(VF_NONE) {}

        bool handled() const {return flags_ & VF_HANDLED; }
        void set_handled(bool handled) {handled ? flags_ |= VF_HANDLED : flags_ &= ~VF_HANDLED;}
        double load() const {return load_; }
        void set_load(double load) {load_ = load;}
        bool pinned() const {return flags_ & VF_PINNED;}
        void set_pinned(bool status) {status ? flags_ |= VF_PINNED : flags_ &= ~VF_PINNED; }
        bool anchored() const {return flags_ & VF_ANCHORED;}
        void set_anchored(bool status) {status ? flags_ |= VF_ANCHORED : flags_ &= ~VF_ANCHORED; }
        double violation() const {return violation_;}
        void set_violation(double viol) {violation_ = viol;}
        bool outofenvelope() const {return flags_ & VF_OUTENVELOPE;}
        void set_outofenvelope(bool status) {status ? flags_ |= VF_OUTENVELOPE : flags_ &= ~VF_OUTENVELOPE; }
    };
};

typedef OpenMesh::PolyMesh_ArrayKernelT<MyTraits> MyMesh;


class MeshObject
{
public:
    MeshObject();
    ~MeshObject();

    friend class Renderer;
private:
    MyMesh* mesh_;
    //Renderer *_rd;
};

#endif // MESHOBJECT_H
