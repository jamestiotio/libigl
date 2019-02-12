// This file is part of libigl, a simple c++ geometry processing library.
//
// Copyright (C) 2017 Sebastian Koch <s.koch@tu-berlin.de> and Daniele Panozzo <daniele.panozzo@gmail.com>
//
// This Source Code Form is subject to the terms of the Mozilla Public License
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at http://mozilla.org/MPL/2.0/.
m.def("cut_mesh_from_singularities", []
(
  const Eigen::MatrixXd &V,
  const Eigen::MatrixXi &F,
  const Eigen::MatrixXi &MMatch,
  Eigen::MatrixXi &seams
)
{
  return igl::cut_mesh_from_singularities(V,F,MMatch,seams);
}, __doc_igl_cut_mesh_from_singularities,
py::arg("V"), py::arg("F"), py::arg("mismatch"), py::arg("seams"));
