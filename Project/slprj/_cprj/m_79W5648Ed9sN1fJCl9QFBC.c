/* Include files */

#include "modelInterface.h"
#include "m_79W5648Ed9sN1fJCl9QFBC.h"
#include <emmintrin.h>
#include <string.h>
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 26,    /* lineNo */
  "GetTransformBlock",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotsimulink\\robotslmanip\\+robotics\\+slmanip\\+internal\\+block\\GetTr"
  "ansformBlock.m"                     /* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 9,   /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 25,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 39,  /* lineNo */
  "GetTransformBlock",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotsimulink\\robotslmanip\\+robotics\\+slmanip\\+internal\\+block\\GetTr"
  "ansformBlock.m"                     /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 1,   /* lineNo */
  "InternalAccess",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\InternalAccess.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 1372,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 47,  /* lineNo */
  "VisualizationInfo",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 69,  /* lineNo */
  "VisualizationInfo",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 74,  /* lineNo */
  "randi",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\randfun\\randi.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 107, /* lineNo */
  "rand",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\randfun\\rand.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 45,  /* lineNo */
  "eml_rand",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 23,  /* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 51,  /* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 111, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 133, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 185, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 201, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 182, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 1332,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 71,  /* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 96,  /* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 106, /* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 140,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 1,  /* lineNo */
  "InternalAccess",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\InternalAccess.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 27, /* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 46, /* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 145,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 163,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 158,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 27, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 32, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 46, /* lineNo */
  "GetTransformBlock",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotsimulink\\robotslmanip\\+robotics\\+slmanip\\+internal\\+block\\GetTr"
  "ansformBlock.m"                     /* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 1039,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 1041,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 1044,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 1055,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 1633,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 93, /* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 1425,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 1432,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 28, /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 512,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 396,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 397,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 399,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 69, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 21, /* lineNo */
  "axang2tform",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\axang2tform.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 24, /* lineNo */
  "axang2tform",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\axang2tform.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 21, /* lineNo */
  "validateNumericMatrix",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\+validation\\validateNumericM"
  "atrix.m"                            /* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 24, /* lineNo */
  "axang2tform",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\axang2tform.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 37, /* lineNo */
  "axang2rotm",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\axang2rotm.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 15, /* lineNo */
  "normalizeRows",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\normalizeRows.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 1681,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 1685,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 1390,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 1396,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 22, /* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\matlabCodegenHandle.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 264,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 342,/* lineNo */
  "CollisionGeometry",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeometry.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 158, /* lineNo */
  17,                                  /* colNo */
  "eml_rand_mt19937ar",                /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 10,  /* lineNo */
  23,                                  /* colNo */
  "validatesize",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 15,  /* lineNo */
  19,                                  /* colNo */
  "validatesize",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 47,  /* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 58,  /* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 64,  /* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo j_emlrtMCI = { 288, /* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtMCInfo k_emlrtMCI = { 18,  /* lineNo */
  23,                                  /* colNo */
  "validatencols",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatencols.m"/* pName */
};

static emlrtMCInfo l_emlrtMCI = { 13,  /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo m_emlrtMCI = { 138, /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo n_emlrtMCI = { 133, /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo o_emlrtMCI = { 28,  /* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 70,    /* lineNo */
  17,                                  /* colNo */
  "VisualizationInfo",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  62,                                  /* iLast */
  70,                                  /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "VisualizationInfo",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo emlrtRTEI = { 52,  /* lineNo */
  25,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pName */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 33,  /* lineNo */
  61,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 33,  /* lineNo */
  61,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  4                                    /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI = { 1395,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo c_emlrtBCI = { 0,   /* iFirst */
  7,                                   /* iLast */
  1396,                                /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1048,                                /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1059,                                /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 31,  /* lineNo */
  14,                                  /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1436,                                /* lineNo */
  62,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  1431,                                /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 1431,/* lineNo */
  29,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  1431,                                /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 1431,/* lineNo */
  27,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo c_emlrtRTEI = { 1428,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo i_emlrtBCI = { 0,   /* iFirst */
  7,                                   /* iLast */
  1429,                                /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1432,                                /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1436,                                /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 1436,/* lineNo */
  38,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1436,                                /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "axang2rotm",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\axang2rotm.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo d_emlrtRTEI = { 263,/* lineNo */
  25,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pName */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  264,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  264,                                 /* lineNo */
  79,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo mc_emlrtRSI = { 13, /* lineNo */
  "sqrt",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 28, /* lineNo */
  "error",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 15, /* lineNo */
  "validatesize",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 14, /* lineNo */
  "validatefinite",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 14, /* lineNo */
  "validatenonnan",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 158,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 18, /* lineNo */
  "validatencols",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatencols.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 288,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 133,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 138,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 64, /* lineNo */
  "assertValidSizeArg",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 58, /* lineNo */
  "assertValidSizeArg",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 10, /* lineNo */
  "validatesize",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pathName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_79W5648Ed9sN1fJCl9QFBC *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_79W5648Ed9sN1fJCl9QFBC
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_79W5648Ed9sN1fJCl9QFBC
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_79W5648Ed9sN1fJCl9QFBC
  *moduleInstance);
static void cgxe_mdl_derivative(InstanceStruct_79W5648Ed9sN1fJCl9QFBC
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_79W5648Ed9sN1fJCl9QFBC
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_79W5648Ed9sN1fJCl9QFBC
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_79W5648Ed9sN1fJCl9QFBC
  *moduleInstance);
static void mw__internal__system__init__fcn
  (InstanceStruct_79W5648Ed9sN1fJCl9QFBC *moduleInstance);
static void mw__internal__system__terminate__fcn
  (InstanceStruct_79W5648Ed9sN1fJCl9QFBC *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__setup(InstanceStruct_79W5648Ed9sN1fJCl9QFBC
  *moduleInstance, const emlrtStack *sp);
static void SystemCore_setup(InstanceStruct_79W5648Ed9sN1fJCl9QFBC
  *moduleInstance, const emlrtStack *sp,
  robotics_slmanip_internal_block_GetTransformBlock *obj);
static void b_rand(InstanceStruct_79W5648Ed9sN1fJCl9QFBC *moduleInstance, const
                   emlrtStack *sp, real_T r[5]);
static void RigidBodyTree_defaultInitializeBodiesCellArray(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree *obj, robotics_manip_internal_RigidBody *
  iobj_0);
static boolean_T b_strcmp(emxArray_char_T *c_b);
static boolean_T c_strcmp(emxArray_char_T *c_b);
static robotics_manip_internal_CollisionSet *CollisionSet_CollisionSet(const
  emlrtStack *sp, robotics_manip_internal_CollisionSet *obj);
static robotics_manip_internal_RigidBody *RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *b_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *c_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *d_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *e_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *f_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *g_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static void mw__internal__call__reset(InstanceStruct_79W5648Ed9sN1fJCl9QFBC
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__step(InstanceStruct_79W5648Ed9sN1fJCl9QFBC
  *moduleInstance, const emlrtStack *sp, real_T b_u0[6], real_T c_y0[16]);
static void GetTransformBlock_stepImpl(const emlrtStack *sp,
  robotics_slmanip_internal_block_GetTransformBlock *obj, real_T q[6], real_T
  tform[16]);
static void RigidBodyTree_forwardKinematics(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree *obj, real_T qvec[6], emxArray_cell_wrap
  *Ttree);
static void rigidBodyJoint_get_JointAxis(rigidBodyJoint *obj, real_T ax[3]);
static void axang2tform(const emlrtStack *sp, real_T axang_data[], int32_T
  axang_size[2], real_T H[16]);
static real_T sumColumnB(real_T x[3]);
static boolean_T d_strcmp(emxArray_char_T *a);
static boolean_T e_strcmp(emxArray_char_T *a);
static void handle_matlabCodegenDestructor(const emlrtStack *sp,
  robotics_manip_internal_CollisionSet *obj);
static const mxArray *message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location);
static void error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                  emlrtMCInfo *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location);
static const mxArray *c_message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, emlrtMCInfo *location);
static real_T eml_rand_mt19937ar(const emlrtStack *sp, uint32_T d_state[625]);
static void emxInitStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_GetTransformBlock *pStruct);
static void emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct);
static void b_emxInitStruct_robotics_manip_in(robotics_manip_internal_RigidBody *
  pStruct);
static void emxInit_char_T(emxArray_char_T **pEmxArray, int32_T numDimensions);
static void emxInitStruct_rigidBodyJoint(rigidBodyJoint *pStruct);
static void c_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct);
static void emxInit_robotics_manip_internal(emxArray_robotics_manip_interna
  **pEmxArray, int32_T numDimensions);
static void emxInitMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[16]);
static void emxFree_char_T(emxArray_char_T **pEmxArray);
static void emxFreeStruct_robotics_manip_in(robotics_manip_internal_RigidBody
  *pStruct);
static void emxFreeStruct_rigidBodyJoint(rigidBodyJoint *pStruct);
static void emxFree_robotics_manip_internal(emxArray_robotics_manip_interna
  **pEmxArray);
static void b_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct);
static void c_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct);
static void emxFreeMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[16]);
static void emxFreeStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_GetTransformBlock *pStruct);
static void emxEnsureCapacity_char_T(emxArray_char_T *emxArray, int32_T oldNumel);
static void emxEnsureCapacity_robotics_mani(emxArray_robotics_manip_interna
  *emxArray, int32_T oldNumel);
static void emxInit_cell_wrap(emxArray_cell_wrap **pEmxArray, int32_T
  numDimensions);
static void emxFree_cell_wrap(emxArray_cell_wrap **pEmxArray);
static void emxEnsureCapacity_cell_wrap(emxArray_cell_wrap *emxArray, int32_T
  oldNumel);
static void init_simulink_io_address(InstanceStruct_79W5648Ed9sN1fJCl9QFBC
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_79W5648Ed9sN1fJCl9QFBC *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  init_simulink_io_address(moduleInstance);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetSimStateCompliance(moduleInstance->S, 4);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__init__fcn(moduleInstance);
  mw__internal__call__setup(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_initialize(InstanceStruct_79W5648Ed9sN1fJCl9QFBC
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  emlrtLicenseCheckR2022a(&st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "robotics_system_toolbox", 2);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__reset(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_79W5648Ed9sN1fJCl9QFBC
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__step(moduleInstance, &st, *moduleInstance->u0,
    *moduleInstance->b_y0);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_79W5648Ed9sN1fJCl9QFBC
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_derivative(InstanceStruct_79W5648Ed9sN1fJCl9QFBC
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_79W5648Ed9sN1fJCl9QFBC
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_79W5648Ed9sN1fJCl9QFBC
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_79W5648Ed9sN1fJCl9QFBC
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__terminate__fcn(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__system__init__fcn
  (InstanceStruct_79W5648Ed9sN1fJCl9QFBC *moduleInstance)
{
  static uint32_T uv[625] = { 5489U, 1301868182U, 2938499221U, 2950281878U,
    1875628136U, 751856242U, 944701696U, 2243192071U, 694061057U, 219885934U,
    2066767472U, 3182869408U, 485472502U, 2336857883U, 1071588843U, 3418470598U,
    951210697U, 3693558366U, 2923482051U, 1793174584U, 2982310801U, 1586906132U,
    1951078751U, 1808158765U, 1733897588U, 431328322U, 4202539044U, 530658942U,
    1714810322U, 3025256284U, 3342585396U, 1937033938U, 2640572511U, 1654299090U,
    3692403553U, 4233871309U, 3497650794U, 862629010U, 2943236032U, 2426458545U,
    1603307207U, 1133453895U, 3099196360U, 2208657629U, 2747653927U, 931059398U,
    761573964U, 3157853227U, 785880413U, 730313442U, 124945756U, 2937117055U,
    3295982469U, 1724353043U, 3021675344U, 3884886417U, 4010150098U, 4056961966U,
    699635835U, 2681338818U, 1339167484U, 720757518U, 2800161476U, 2376097373U,
    1532957371U, 3902664099U, 1238982754U, 3725394514U, 3449176889U, 3570962471U,
    4287636090U, 4087307012U, 3603343627U, 202242161U, 2995682783U, 1620962684U,
    3704723357U, 371613603U, 2814834333U, 2111005706U, 624778151U, 2094172212U,
    4284947003U, 1211977835U, 991917094U, 1570449747U, 2962370480U, 1259410321U,
    170182696U, 146300961U, 2836829791U, 619452428U, 2723670296U, 1881399711U,
    1161269684U, 1675188680U, 4132175277U, 780088327U, 3409462821U, 1036518241U,
    1834958505U, 3048448173U, 161811569U, 618488316U, 44795092U, 3918322701U,
    1924681712U, 3239478144U, 383254043U, 4042306580U, 2146983041U, 3992780527U,
    3518029708U, 3545545436U, 3901231469U, 1896136409U, 2028528556U, 2339662006U,
    501326714U, 2060962201U, 2502746480U, 561575027U, 581893337U, 3393774360U,
    1778912547U, 3626131687U, 2175155826U, 319853231U, 986875531U, 819755096U,
    2915734330U, 2688355739U, 3482074849U, 2736559U, 2296975761U, 1029741190U,
    2876812646U, 690154749U, 579200347U, 4027461746U, 1285330465U, 2701024045U,
    4117700889U, 759495121U, 3332270341U, 2313004527U, 2277067795U, 4131855432U,
    2722057515U, 1264804546U, 3848622725U, 2211267957U, 4100593547U, 959123777U,
    2130745407U, 3194437393U, 486673947U, 1377371204U, 17472727U, 352317554U,
    3955548058U, 159652094U, 1232063192U, 3835177280U, 49423123U, 3083993636U,
    733092U, 2120519771U, 2573409834U, 1112952433U, 3239502554U, 761045320U,
    1087580692U, 2540165110U, 641058802U, 1792435497U, 2261799288U, 1579184083U,
    627146892U, 2165744623U, 2200142389U, 2167590760U, 2381418376U, 1793358889U,
    3081659520U, 1663384067U, 2009658756U, 2689600308U, 739136266U, 2304581039U,
    3529067263U, 591360555U, 525209271U, 3131882996U, 294230224U, 2076220115U,
    3113580446U, 1245621585U, 1386885462U, 3203270426U, 123512128U, 12350217U,
    354956375U, 4282398238U, 3356876605U, 3888857667U, 157639694U, 2616064085U,
    1563068963U, 2762125883U, 4045394511U, 4180452559U, 3294769488U, 1684529556U,
    1002945951U, 3181438866U, 22506664U, 691783457U, 2685221343U, 171579916U,
    3878728600U, 2475806724U, 2030324028U, 3331164912U, 1708711359U, 1970023127U,
    2859691344U, 2588476477U, 2748146879U, 136111222U, 2967685492U, 909517429U,
    2835297809U, 3206906216U, 3186870716U, 341264097U, 2542035121U, 3353277068U,
    548223577U, 3170936588U, 1678403446U, 297435620U, 2337555430U, 466603495U,
    1132321815U, 1208589219U, 696392160U, 894244439U, 2562678859U, 470224582U,
    3306867480U, 201364898U, 2075966438U, 1767227936U, 2929737987U, 3674877796U,
    2654196643U, 3692734598U, 3528895099U, 2796780123U, 3048728353U, 842329300U,
    191554730U, 2922459673U, 3489020079U, 3979110629U, 1022523848U, 2202932467U,
    3583655201U, 3565113719U, 587085778U, 4176046313U, 3013713762U, 950944241U,
    396426791U, 3784844662U, 3477431613U, 3594592395U, 2782043838U, 3392093507U,
    3106564952U, 2829419931U, 1358665591U, 2206918825U, 3170783123U, 31522386U,
    2988194168U, 1782249537U, 1105080928U, 843500134U, 1225290080U, 1521001832U,
    3605886097U, 2802786495U, 2728923319U, 3996284304U, 903417639U, 1171249804U,
    1020374987U, 2824535874U, 423621996U, 1988534473U, 2493544470U, 1008604435U,
    1756003503U, 1488867287U, 1386808992U, 732088248U, 1780630732U, 2482101014U,
    976561178U, 1543448953U, 2602866064U, 2021139923U, 1952599828U, 2360242564U,
    2117959962U, 2753061860U, 2388623612U, 4138193781U, 2962920654U, 2284970429U,
    766920861U, 3457264692U, 2879611383U, 815055854U, 2332929068U, 1254853997U,
    3740375268U, 3799380844U, 4091048725U, 2006331129U, 1982546212U, 686850534U,
    1907447564U, 2682801776U, 2780821066U, 998290361U, 1342433871U, 4195430425U,
    607905174U, 3902331779U, 2454067926U, 1708133115U, 1170874362U, 2008609376U,
    3260320415U, 2211196135U, 433538229U, 2728786374U, 2189520818U, 262554063U,
    1182318347U, 3710237267U, 1221022450U, 715966018U, 2417068910U, 2591870721U,
    2870691989U, 3418190842U, 4238214053U, 1540704231U, 1575580968U, 2095917976U,
    4078310857U, 2313532447U, 2110690783U, 4056346629U, 4061784526U, 1123218514U,
    551538993U, 597148360U, 4120175196U, 3581618160U, 3181170517U, 422862282U,
    3227524138U, 1713114790U, 662317149U, 1230418732U, 928171837U, 1324564878U,
    1928816105U, 1786535431U, 2878099422U, 3290185549U, 539474248U, 1657512683U,
    552370646U, 1671741683U, 3655312128U, 1552739510U, 2605208763U, 1441755014U,
    181878989U, 3124053868U, 1447103986U, 3183906156U, 1728556020U, 3502241336U,
    3055466967U, 1013272474U, 818402132U, 1715099063U, 2900113506U, 397254517U,
    4194863039U, 1009068739U, 232864647U, 2540223708U, 2608288560U, 2415367765U,
    478404847U, 3455100648U, 3182600021U, 2115988978U, 434269567U, 4117179324U,
    3461774077U, 887256537U, 3545801025U, 286388911U, 3451742129U, 1981164769U,
    786667016U, 3310123729U, 3097811076U, 2224235657U, 2959658883U, 3370969234U,
    2514770915U, 3345656436U, 2677010851U, 2206236470U, 271648054U, 2342188545U,
    4292848611U, 3646533909U, 3754009956U, 3803931226U, 4160647125U, 1477814055U,
    4043852216U, 1876372354U, 3133294443U, 3871104810U, 3177020907U, 2074304428U,
    3479393793U, 759562891U, 164128153U, 1839069216U, 2114162633U, 3989947309U,
    3611054956U, 1333547922U, 835429831U, 494987340U, 171987910U, 1252001001U,
    370809172U, 3508925425U, 2535703112U, 1276855041U, 1922855120U, 835673414U,
    3030664304U, 613287117U, 171219893U, 3423096126U, 3376881639U, 2287770315U,
    1658692645U, 1262815245U, 3957234326U, 1168096164U, 2968737525U, 2655813712U,
    2132313144U, 3976047964U, 326516571U, 353088456U, 3679188938U, 3205649712U,
    2654036126U, 1249024881U, 880166166U, 691800469U, 2229503665U, 1673458056U,
    4032208375U, 1851778863U, 2563757330U, 376742205U, 1794655231U, 340247333U,
    1505873033U, 396524441U, 879666767U, 3335579166U, 3260764261U, 3335999539U,
    506221798U, 4214658741U, 975887814U, 2080536343U, 3360539560U, 571586418U,
    138896374U, 4234352651U, 2737620262U, 3928362291U, 1516365296U, 38056726U,
    3599462320U, 3585007266U, 3850961033U, 471667319U, 1536883193U, 2310166751U,
    1861637689U, 2530999841U, 4139843801U, 2710569485U, 827578615U, 2012334720U,
    2907369459U, 3029312804U, 2820112398U, 1965028045U, 35518606U, 2478379033U,
    643747771U, 1924139484U, 4123405127U, 3811735531U, 3429660832U, 3285177704U,
    1948416081U, 1311525291U, 1183517742U, 1739192232U, 3979815115U, 2567840007U,
    4116821529U, 213304419U, 4125718577U, 1473064925U, 2442436592U, 1893310111U,
    4195361916U, 3747569474U, 828465101U, 2991227658U, 750582866U, 1205170309U,
    1409813056U, 678418130U, 1171531016U, 3821236156U, 354504587U, 4202874632U,
    3882511497U, 1893248677U, 1903078632U, 26340130U, 2069166240U, 3657122492U,
    3725758099U, 831344905U, 811453383U, 3447711422U, 2434543565U, 4166886888U,
    3358210805U, 4142984013U, 2988152326U, 3527824853U, 982082992U, 2809155763U,
    190157081U, 3340214818U, 2365432395U, 2548636180U, 2894533366U, 3474657421U,
    2372634704U, 2845748389U, 43024175U, 2774226648U, 1987702864U, 3186502468U,
    453610222U, 4204736567U, 1392892630U, 2471323686U, 2470534280U, 3541393095U,
    4269885866U, 3909911300U, 759132955U, 1482612480U, 667715263U, 1795580598U,
    2337923983U, 3390586366U, 581426223U, 1515718634U, 476374295U, 705213300U,
    363062054U, 2084697697U, 2407503428U, 2292957699U, 2426213835U, 2199989172U,
    1987356470U, 4026755612U, 2147252133U, 270400031U, 1367820199U, 2369854699U,
    2844269403U, 79981964U, 624U };

  int32_T i;
  emxInitStruct_robotics_slmanip_(&moduleInstance->sysobj);
  for (i = 0; i < 16; i++) {
    moduleInstance->sysobj.TreeInternal._pobj0[i].
      CollisionsInternal.matlabCodegenIsDeleted = true;
  }

  moduleInstance->sysobj.TreeInternal.Base.CollisionsInternal.matlabCodegenIsDeleted
    = true;
  for (i = 0; i < 16; i++) {
    moduleInstance->sysobj.TreeInternal._pobj0[i].matlabCodegenIsDeleted = true;
  }

  moduleInstance->sysobj.TreeInternal.Base.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.TreeInternal.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.matlabCodegenIsDeleted = true;
  moduleInstance->method = 7U;
  moduleInstance->method_not_empty = true;
  moduleInstance->state = 1144108930U;
  moduleInstance->state_not_empty = true;
  for (i = 0; i < 2; i++) {
    moduleInstance->b_state[i] = 158852560U * (uint32_T)i + 362436069U;
  }

  moduleInstance->b_state_not_empty = true;
  memcpy(&moduleInstance->c_state[0], &uv[0], 625U * sizeof(uint32_T));
  moduleInstance->c_state_not_empty = true;
}

static void mw__internal__system__terminate__fcn
  (InstanceStruct_79W5648Ed9sN1fJCl9QFBC *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  robotics_manip_internal_RigidBody *b_obj;
  robotics_manip_internal_RigidBodyTree *obj;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = NULL;
  if (!moduleInstance->sysobj.matlabCodegenIsDeleted) {
    moduleInstance->sysobj.matlabCodegenIsDeleted = true;
  }

  st.site = NULL;
  obj = &moduleInstance->sysobj.TreeInternal;
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }

  st.site = NULL;
  b_obj = &moduleInstance->sysobj.TreeInternal.Base;
  if (!b_obj->matlabCodegenIsDeleted) {
    b_obj->matlabCodegenIsDeleted = true;
  }

  for (i = 0; i < 16; i++) {
    st.site = NULL;
    b_obj = &moduleInstance->sysobj.TreeInternal._pobj0[i];
    if (!b_obj->matlabCodegenIsDeleted) {
      b_obj->matlabCodegenIsDeleted = true;
    }
  }

  st.site = NULL;
  handle_matlabCodegenDestructor(&st,
    &moduleInstance->sysobj.TreeInternal.Base.CollisionsInternal);
  for (i = 0; i < 16; i++) {
    st.site = NULL;
    handle_matlabCodegenDestructor(&st,
      &moduleInstance->sysobj.TreeInternal._pobj0[i].CollisionsInternal);
  }

  emxFreeStruct_robotics_slmanip_(&moduleInstance->sysobj);
}

static void mw__internal__call__setup(InstanceStruct_79W5648Ed9sN1fJCl9QFBC
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &f_emlrtRSI;
  SystemCore_setup(moduleInstance, &st, &moduleInstance->sysobj);
}

static void SystemCore_setup(InstanceStruct_79W5648Ed9sN1fJCl9QFBC
  *moduleInstance, const emlrtStack *sp,
  robotics_slmanip_internal_block_GetTransformBlock *obj)
{
  static real_T dv2[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 0.29, 1.0 };

  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T d_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T cv5[9] = { 'b', 'a', 's', 'e', '_', 'l', 'i', 'n', 'k' };

  static char_T cv3[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T cv2[6] = { 'l', 'i', 'n', 'k', '_', '1' };

  static char_T cv4[6] = { 'l', 'i', 'n', 'k', '_', '2' };

  static char_T cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T f_u[5] = { 's', 'e', 't', 'u', 'p' };

  static char_T cv[4] = { 'b', 'a', 's', 'e' };

  static int8_T iv4[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  static int8_T iv5[3] = { 0, 1, 0 };

  __m128d r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  real_T idx[5];
  real_T dv[2];
  real_T dv1[2];
  real_T b_idx;
  int32_T i;
  int32_T k;
  char_T c_u[51];
  char_T e_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  if (obj->isInitialized != 0) {
    for (i = 0; i < 51; i++) {
      c_u[i] = d_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 51, m, &c_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      c_u[i] = d_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 51, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      e_u[i] = f_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 5, m, &e_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &d_emlrtRSI;
    error(&st, y, getString(&st, message(&st, b_y, c_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }

  obj->isInitialized = 1;
  st.site = &d_emlrtRSI;
  b_st.site = &g_emlrtRSI;
  c_st.site = &q_emlrtRSI;
  d_st.site = &h_emlrtRSI;
  c_st.site = &r_emlrtRSI;
  d_st.site = &i_emlrtRSI;
  e_st.site = &j_emlrtRSI;
  f_st.site = &k_emlrtRSI;
  g_st.site = &l_emlrtRSI;
  b_rand(moduleInstance, &g_st, idx);
  for (k = 0; k <= 2; k += 2) {
    r = _mm_loadu_pd(&idx[k]);
    _mm_storeu_pd(&dv[0], _mm_mul_pd(r, _mm_set1_pd(62.0)));
    dv1[0] = muDoubleScalarFloor(dv[0]);
    dv1[1] = muDoubleScalarFloor(dv[1]);
    r = _mm_loadu_pd(&dv1[0]);
    _mm_storeu_pd(&idx[k], _mm_add_pd(r, _mm_set1_pd(1.0)));
  }

  for (k = 4; k < 5; k++) {
    b_idx = idx[4];
    b_idx = muDoubleScalarFloor(b_idx * 62.0) + 1.0;
    idx[4] = b_idx;
  }

  for (i = 0; i < 5; i++) {
    k = (int32_T)emlrtIntegerCheckR2012b(idx[i], &emlrtDCI, &e_st);
    emlrtDynamicBoundsCheckR2012b(k, 1, 62, &emlrtBCI, &e_st);
  }

  obj->TreeInternal.NumBodies = 8.0;
  c_st.site = &u_emlrtRSI;
  RigidBodyTree_defaultInitializeBodiesCellArray(&c_st, &obj->TreeInternal,
    &obj->TreeInternal._pobj0[0]);
  c_st.site = &s_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  e_st.site = &h_emlrtRSI;
  i = obj->TreeInternal._pobj0[8].NameInternal->size[0] *
    obj->TreeInternal._pobj0[8].NameInternal->size[1];
  obj->TreeInternal._pobj0[8].NameInternal->size[0] = 1;
  obj->TreeInternal._pobj0[8].NameInternal->size[1] = 4;
  emxEnsureCapacity_char_T(obj->TreeInternal._pobj0[8].NameInternal, i);
  for (i = 0; i < 4; i++) {
    obj->TreeInternal._pobj0[8].NameInternal->data[i] = cv[i];
  }

  obj->TreeInternal._pobj0[8].ParentIndex = 0.0;
  d_st.site = &eb_emlrtRSI;
  e_st.site = &ab_emlrtRSI;
  i = obj->TreeInternal._pobj0[8].JointInternal.Type->size[0] *
    obj->TreeInternal._pobj0[8].JointInternal.Type->size[1];
  obj->TreeInternal._pobj0[8].JointInternal.Type->size[0] = 1;
  obj->TreeInternal._pobj0[8].JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(obj->TreeInternal._pobj0[8].JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    obj->TreeInternal._pobj0[8].JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->TreeInternal._pobj0[8]
    .JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  k = obj->TreeInternal._pobj0[8].JointInternal.Type->size[1];
  for (i = 0; i < k; i++) {
    switch_expression->data[i] = obj->TreeInternal._pobj0[8].
      JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    k = 0;
  } else if (c_strcmp(switch_expression)) {
    k = 1;
  } else {
    k = -1;
  }

  switch (k) {
   case 0:
    obj->TreeInternal._pobj0[8].JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      obj->TreeInternal._pobj0[8].JointInternal.JointAxisInternal[i] = (real_T)
        iv3[i];
    }
    break;

   case 1:
    obj->TreeInternal._pobj0[8].JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      obj->TreeInternal._pobj0[8].JointInternal.JointAxisInternal[i] = (real_T)
        iv3[i];
    }
    break;

   default:
    obj->TreeInternal._pobj0[8].JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      obj->TreeInternal._pobj0[8].JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  for (i = 0; i < 16; i++) {
    obj->TreeInternal._pobj0[8].JointInternal.JointToParentTransform[i] =
      (real_T)iv4[i];
  }

  for (i = 0; i < 16; i++) {
    obj->TreeInternal._pobj0[8].JointInternal.ChildToJointTransform[i] = (real_T)
      iv4[i];
  }

  for (i = 0; i < 3; i++) {
    obj->TreeInternal._pobj0[8].JointInternal.JointAxisInternal[i] = 0.0;
  }

  d_st.site = &fb_emlrtRSI;
  CollisionSet_CollisionSet(&d_st, &obj->TreeInternal._pobj0[8].
    CollisionsInternal);
  obj->TreeInternal._pobj0[8].matlabCodegenIsDeleted = false;
  obj->TreeInternal.Bodies[0] = &obj->TreeInternal._pobj0[8];
  c_st.site = &s_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  e_st.site = &h_emlrtRSI;
  i = obj->TreeInternal._pobj0[9].NameInternal->size[0] *
    obj->TreeInternal._pobj0[9].NameInternal->size[1];
  obj->TreeInternal._pobj0[9].NameInternal->size[0] = 1;
  obj->TreeInternal._pobj0[9].NameInternal->size[1] = 6;
  emxEnsureCapacity_char_T(obj->TreeInternal._pobj0[9].NameInternal, i);
  for (i = 0; i < 6; i++) {
    obj->TreeInternal._pobj0[9].NameInternal->data[i] = cv2[i];
  }

  obj->TreeInternal._pobj0[9].ParentIndex = 0.0;
  d_st.site = &eb_emlrtRSI;
  e_st.site = &ab_emlrtRSI;
  i = obj->TreeInternal._pobj0[9].JointInternal.Type->size[0] *
    obj->TreeInternal._pobj0[9].JointInternal.Type->size[1];
  obj->TreeInternal._pobj0[9].JointInternal.Type->size[0] = 1;
  obj->TreeInternal._pobj0[9].JointInternal.Type->size[1] = 8;
  emxEnsureCapacity_char_T(obj->TreeInternal._pobj0[9].JointInternal.Type, i);
  for (i = 0; i < 8; i++) {
    obj->TreeInternal._pobj0[9].JointInternal.Type->data[i] = cv3[i];
  }

  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->TreeInternal._pobj0[9]
    .JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  k = obj->TreeInternal._pobj0[9].JointInternal.Type->size[1];
  for (i = 0; i < k; i++) {
    switch_expression->data[i] = obj->TreeInternal._pobj0[9].
      JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    k = 0;
  } else if (c_strcmp(switch_expression)) {
    k = 1;
  } else {
    k = -1;
  }

  switch (k) {
   case 0:
    obj->TreeInternal._pobj0[9].JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      obj->TreeInternal._pobj0[9].JointInternal.JointAxisInternal[i] = (real_T)
        iv3[i];
    }
    break;

   case 1:
    obj->TreeInternal._pobj0[9].JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      obj->TreeInternal._pobj0[9].JointInternal.JointAxisInternal[i] = (real_T)
        iv3[i];
    }
    break;

   default:
    obj->TreeInternal._pobj0[9].JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      obj->TreeInternal._pobj0[9].JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  for (i = 0; i < 16; i++) {
    obj->TreeInternal._pobj0[9].JointInternal.JointToParentTransform[i] =
      (real_T)iv4[i];
  }

  for (i = 0; i < 16; i++) {
    obj->TreeInternal._pobj0[9].JointInternal.ChildToJointTransform[i] = (real_T)
      iv4[i];
  }

  for (i = 0; i < 3; i++) {
    obj->TreeInternal._pobj0[9].JointInternal.JointAxisInternal[i] = (real_T)
      iv3[i];
  }

  d_st.site = &fb_emlrtRSI;
  CollisionSet_CollisionSet(&d_st, &obj->TreeInternal._pobj0[9].
    CollisionsInternal);
  obj->TreeInternal._pobj0[9].matlabCodegenIsDeleted = false;
  obj->TreeInternal.Bodies[1] = &obj->TreeInternal._pobj0[9];
  c_st.site = &s_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  e_st.site = &h_emlrtRSI;
  i = obj->TreeInternal._pobj0[10].NameInternal->size[0] *
    obj->TreeInternal._pobj0[10].NameInternal->size[1];
  obj->TreeInternal._pobj0[10].NameInternal->size[0] = 1;
  obj->TreeInternal._pobj0[10].NameInternal->size[1] = 6;
  emxEnsureCapacity_char_T(obj->TreeInternal._pobj0[10].NameInternal, i);
  for (i = 0; i < 6; i++) {
    obj->TreeInternal._pobj0[10].NameInternal->data[i] = cv4[i];
  }

  obj->TreeInternal._pobj0[10].ParentIndex = 2.0;
  d_st.site = &eb_emlrtRSI;
  e_st.site = &ab_emlrtRSI;
  i = obj->TreeInternal._pobj0[10].JointInternal.Type->size[0] *
    obj->TreeInternal._pobj0[10].JointInternal.Type->size[1];
  obj->TreeInternal._pobj0[10].JointInternal.Type->size[0] = 1;
  obj->TreeInternal._pobj0[10].JointInternal.Type->size[1] = 8;
  emxEnsureCapacity_char_T(obj->TreeInternal._pobj0[10].JointInternal.Type, i);
  for (i = 0; i < 8; i++) {
    obj->TreeInternal._pobj0[10].JointInternal.Type->data[i] = cv3[i];
  }

  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->TreeInternal._pobj0[10]
    .JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  k = obj->TreeInternal._pobj0[10].JointInternal.Type->size[1];
  for (i = 0; i < k; i++) {
    switch_expression->data[i] = obj->TreeInternal._pobj0[10].
      JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    k = 0;
  } else if (c_strcmp(switch_expression)) {
    k = 1;
  } else {
    k = -1;
  }

  switch (k) {
   case 0:
    obj->TreeInternal._pobj0[10].JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      obj->TreeInternal._pobj0[10].JointInternal.JointAxisInternal[i] = (real_T)
        iv3[i];
    }
    break;

   case 1:
    obj->TreeInternal._pobj0[10].JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      obj->TreeInternal._pobj0[10].JointInternal.JointAxisInternal[i] = (real_T)
        iv3[i];
    }
    break;

   default:
    obj->TreeInternal._pobj0[10].JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      obj->TreeInternal._pobj0[10].JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  for (i = 0; i < 16; i++) {
    obj->TreeInternal._pobj0[10].JointInternal.JointToParentTransform[i] = dv2[i];
  }

  for (i = 0; i < 16; i++) {
    obj->TreeInternal._pobj0[10].JointInternal.ChildToJointTransform[i] =
      (real_T)iv4[i];
  }

  for (i = 0; i < 3; i++) {
    obj->TreeInternal._pobj0[10].JointInternal.JointAxisInternal[i] = (real_T)
      iv5[i];
  }

  d_st.site = &fb_emlrtRSI;
  CollisionSet_CollisionSet(&d_st, &obj->TreeInternal._pobj0[10].
    CollisionsInternal);
  obj->TreeInternal._pobj0[10].matlabCodegenIsDeleted = false;
  obj->TreeInternal.Bodies[2] = &obj->TreeInternal._pobj0[10];
  c_st.site = &s_emlrtRSI;
  obj->TreeInternal.Bodies[3] = c_RigidBody_RigidBody(&c_st,
    &obj->TreeInternal._pobj0[11]);
  c_st.site = &s_emlrtRSI;
  obj->TreeInternal.Bodies[4] = d_RigidBody_RigidBody(&c_st,
    &obj->TreeInternal._pobj0[12]);
  c_st.site = &s_emlrtRSI;
  obj->TreeInternal.Bodies[5] = e_RigidBody_RigidBody(&c_st,
    &obj->TreeInternal._pobj0[13]);
  c_st.site = &s_emlrtRSI;
  obj->TreeInternal.Bodies[6] = f_RigidBody_RigidBody(&c_st,
    &obj->TreeInternal._pobj0[14]);
  c_st.site = &s_emlrtRSI;
  obj->TreeInternal.Bodies[7] = g_RigidBody_RigidBody(&c_st,
    &obj->TreeInternal._pobj0[15]);
  obj->TreeInternal.PositionNumber = 6.0;
  c_st.site = &t_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  e_st.site = &h_emlrtRSI;
  i = obj->TreeInternal.Base.NameInternal->size[0] *
    obj->TreeInternal.Base.NameInternal->size[1];
  obj->TreeInternal.Base.NameInternal->size[0] = 1;
  obj->TreeInternal.Base.NameInternal->size[1] = 9;
  emxEnsureCapacity_char_T(obj->TreeInternal.Base.NameInternal, i);
  for (i = 0; i < 9; i++) {
    obj->TreeInternal.Base.NameInternal->data[i] = cv5[i];
  }

  obj->TreeInternal.Base.ParentIndex = -1.0;
  d_st.site = &gb_emlrtRSI;
  e_st.site = &ab_emlrtRSI;
  i = obj->TreeInternal.Base.JointInternal.Type->size[0] *
    obj->TreeInternal.Base.JointInternal.Type->size[1];
  obj->TreeInternal.Base.JointInternal.Type->size[0] = 1;
  obj->TreeInternal.Base.JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(obj->TreeInternal.Base.JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    obj->TreeInternal.Base.JointInternal.Type->data[i] = cv1[i];
  }

  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->TreeInternal.Base.JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  k = obj->TreeInternal.Base.JointInternal.Type->size[1];
  for (i = 0; i < k; i++) {
    switch_expression->data[i] = obj->TreeInternal.Base.JointInternal.Type->
      data[i];
  }

  if (b_strcmp(switch_expression)) {
    k = 0;
  } else if (c_strcmp(switch_expression)) {
    k = 1;
  } else {
    k = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (k) {
   case 0:
    obj->TreeInternal.Base.JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      obj->TreeInternal.Base.JointInternal.JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    obj->TreeInternal.Base.JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      obj->TreeInternal.Base.JointInternal.JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    obj->TreeInternal.Base.JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      obj->TreeInternal.Base.JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  d_st.site = &fb_emlrtRSI;
  CollisionSet_CollisionSet(&d_st, &obj->TreeInternal.Base.CollisionsInternal);
  obj->TreeInternal.Base.matlabCodegenIsDeleted = false;
  obj->TreeInternal.matlabCodegenIsDeleted = false;
}

static void b_rand(InstanceStruct_79W5648Ed9sN1fJCl9QFBC *moduleInstance, const
                   emlrtStack *sp, real_T r[5])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T d;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &m_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &n_emlrtRSI;
  for (k = 0; k < 5; k++) {
    c_st.site = &o_emlrtRSI;
    d = eml_rand_mt19937ar(&c_st, moduleInstance->c_state);
    r[k] = d;
  }
}

static void RigidBodyTree_defaultInitializeBodiesCellArray(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree *obj, robotics_manip_internal_RigidBody *
  iobj_0)
{
  static char_T b_bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '2'
  };

  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '1' };

  static char_T c_bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '3'
  };

  static char_T d_bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '4'
  };

  static char_T e_bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '5'
  };

  static char_T f_bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '6'
  };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &v_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &w_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  i = iobj_0[0].NameInternal->size[0] * iobj_0[0].NameInternal->size[1];
  iobj_0[0].NameInternal->size[0] = 1;
  iobj_0[0].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_0[0].NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_0[0].NameInternal->data[i] = bname[i];
  }

  b_st.site = &x_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  i = iobj_0[0].JointInternal.Type->size[0] * iobj_0[0].JointInternal.Type->
    size[1];
  iobj_0[0].JointInternal.Type->size[0] = 1;
  iobj_0[0].JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_0[0].JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    iobj_0[0].JointInternal.Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_0[0].JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_0[0].JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_0[0].JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    iobj_0[0].JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_0[0].JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   case 1:
    iobj_0[0].JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_0[0].JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   default:
    iobj_0[0].JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_0[0].JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  iobj_0[0].ParentIndex = -1.0;
  b_st.site = &y_emlrtRSI;
  CollisionSet_CollisionSet(&b_st, &iobj_0[0].CollisionsInternal);
  iobj_0[0].matlabCodegenIsDeleted = false;
  obj->Bodies[0] = &iobj_0[0];
  st.site = &v_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  i = iobj_0[1].NameInternal->size[0] * iobj_0[1].NameInternal->size[1];
  iobj_0[1].NameInternal->size[0] = 1;
  iobj_0[1].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_0[1].NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_0[1].NameInternal->data[i] = b_bname[i];
  }

  b_st.site = &x_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  i = iobj_0[1].JointInternal.Type->size[0] * iobj_0[1].JointInternal.Type->
    size[1];
  iobj_0[1].JointInternal.Type->size[0] = 1;
  iobj_0[1].JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_0[1].JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    iobj_0[1].JointInternal.Type->data[i] = cv[i];
  }

  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_0[1].JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_0[1].JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_0[1].JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    iobj_0[1].JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_0[1].JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   case 1:
    iobj_0[1].JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_0[1].JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   default:
    iobj_0[1].JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_0[1].JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  iobj_0[1].ParentIndex = -1.0;
  b_st.site = &y_emlrtRSI;
  CollisionSet_CollisionSet(&b_st, &iobj_0[1].CollisionsInternal);
  iobj_0[1].matlabCodegenIsDeleted = false;
  obj->Bodies[1] = &iobj_0[1];
  st.site = &v_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  i = iobj_0[2].NameInternal->size[0] * iobj_0[2].NameInternal->size[1];
  iobj_0[2].NameInternal->size[0] = 1;
  iobj_0[2].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_0[2].NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_0[2].NameInternal->data[i] = c_bname[i];
  }

  b_st.site = &x_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  i = iobj_0[2].JointInternal.Type->size[0] * iobj_0[2].JointInternal.Type->
    size[1];
  iobj_0[2].JointInternal.Type->size[0] = 1;
  iobj_0[2].JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_0[2].JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    iobj_0[2].JointInternal.Type->data[i] = cv[i];
  }

  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_0[2].JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_0[2].JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_0[2].JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    iobj_0[2].JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_0[2].JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   case 1:
    iobj_0[2].JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_0[2].JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   default:
    iobj_0[2].JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_0[2].JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  iobj_0[2].ParentIndex = -1.0;
  b_st.site = &y_emlrtRSI;
  CollisionSet_CollisionSet(&b_st, &iobj_0[2].CollisionsInternal);
  iobj_0[2].matlabCodegenIsDeleted = false;
  obj->Bodies[2] = &iobj_0[2];
  st.site = &v_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  i = iobj_0[3].NameInternal->size[0] * iobj_0[3].NameInternal->size[1];
  iobj_0[3].NameInternal->size[0] = 1;
  iobj_0[3].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_0[3].NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_0[3].NameInternal->data[i] = d_bname[i];
  }

  b_st.site = &x_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  i = iobj_0[3].JointInternal.Type->size[0] * iobj_0[3].JointInternal.Type->
    size[1];
  iobj_0[3].JointInternal.Type->size[0] = 1;
  iobj_0[3].JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_0[3].JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    iobj_0[3].JointInternal.Type->data[i] = cv[i];
  }

  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_0[3].JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_0[3].JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_0[3].JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    iobj_0[3].JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_0[3].JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   case 1:
    iobj_0[3].JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_0[3].JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   default:
    iobj_0[3].JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_0[3].JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  iobj_0[3].ParentIndex = -1.0;
  b_st.site = &y_emlrtRSI;
  CollisionSet_CollisionSet(&b_st, &iobj_0[3].CollisionsInternal);
  iobj_0[3].matlabCodegenIsDeleted = false;
  obj->Bodies[3] = &iobj_0[3];
  st.site = &v_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  i = iobj_0[4].NameInternal->size[0] * iobj_0[4].NameInternal->size[1];
  iobj_0[4].NameInternal->size[0] = 1;
  iobj_0[4].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_0[4].NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_0[4].NameInternal->data[i] = e_bname[i];
  }

  b_st.site = &x_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  i = iobj_0[4].JointInternal.Type->size[0] * iobj_0[4].JointInternal.Type->
    size[1];
  iobj_0[4].JointInternal.Type->size[0] = 1;
  iobj_0[4].JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_0[4].JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    iobj_0[4].JointInternal.Type->data[i] = cv[i];
  }

  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_0[4].JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_0[4].JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_0[4].JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    iobj_0[4].JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_0[4].JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   case 1:
    iobj_0[4].JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_0[4].JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   default:
    iobj_0[4].JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_0[4].JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  iobj_0[4].ParentIndex = -1.0;
  b_st.site = &y_emlrtRSI;
  CollisionSet_CollisionSet(&b_st, &iobj_0[4].CollisionsInternal);
  iobj_0[4].matlabCodegenIsDeleted = false;
  obj->Bodies[4] = &iobj_0[4];
  st.site = &v_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  i = iobj_0[5].NameInternal->size[0] * iobj_0[5].NameInternal->size[1];
  iobj_0[5].NameInternal->size[0] = 1;
  iobj_0[5].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_0[5].NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_0[5].NameInternal->data[i] = f_bname[i];
  }

  b_st.site = &x_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  i = iobj_0[5].JointInternal.Type->size[0] * iobj_0[5].JointInternal.Type->
    size[1];
  iobj_0[5].JointInternal.Type->size[0] = 1;
  iobj_0[5].JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_0[5].JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    iobj_0[5].JointInternal.Type->data[i] = cv[i];
  }

  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_0[5].JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_0[5].JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_0[5].JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    iobj_0[5].JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_0[5].JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   case 1:
    iobj_0[5].JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_0[5].JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   default:
    iobj_0[5].JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_0[5].JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  iobj_0[5].ParentIndex = -1.0;
  b_st.site = &y_emlrtRSI;
  CollisionSet_CollisionSet(&b_st, &iobj_0[5].CollisionsInternal);
  iobj_0[5].matlabCodegenIsDeleted = false;
  obj->Bodies[5] = &iobj_0[5];
  st.site = &v_emlrtRSI;
  obj->Bodies[6] = RigidBody_RigidBody(&st, &iobj_0[6]);
  st.site = &v_emlrtRSI;
  obj->Bodies[7] = b_RigidBody_RigidBody(&st, &iobj_0[7]);
}

static boolean_T b_strcmp(emxArray_char_T *c_b)
{
  static char_T cv[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (c_b->size[1] != 8) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 8) {
        if (cv[kstr - 1] != c_b->data[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static boolean_T c_strcmp(emxArray_char_T *c_b)
{
  static char_T cv[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (c_b->size[1] != 9) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 9) {
        if (cv[kstr - 1] != c_b->data[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static robotics_manip_internal_CollisionSet *CollisionSet_CollisionSet(const
  emlrtStack *sp, robotics_manip_internal_CollisionSet *obj)
{
  static void *t0_GeometryInternal = NULL;
  emlrtStack b_st;
  emlrtStack st;
  emxArray_robotics_manip_interna *r;
  robotics_manip_internal_CollisionGeometry expl_temp;
  robotics_manip_internal_CollisionSet *b_obj;
  real_T d;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  emxInit_robotics_manip_internal(&r, 2);
  b_obj = obj;
  b_obj->Size = 0.0;
  st.site = &cb_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  b_obj->MaxElements = 0.0;
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  d = emlrtNonNegativeCheckR2012b(b_obj->MaxElements, &c_emlrtDCI,
    (emlrtConstCTX)sp);
  r->size[1] = (int32_T)emlrtIntegerCheckR2012b(d, &b_emlrtDCI, (emlrtConstCTX)
    sp);
  emxEnsureCapacity_robotics_mani(r, i);
  for (i = 0; i < 2; i++) {
    iv[i] = r->size[i];
  }

  i = b_obj->CollisionGeometries->size[0] * b_obj->CollisionGeometries->size[1];
  b_obj->CollisionGeometries->size[0] = iv[0];
  b_obj->CollisionGeometries->size[1] = iv[1];
  emxEnsureCapacity_robotics_mani(b_obj->CollisionGeometries, i);
  st.site = &db_emlrtRSI;
  d = b_obj->MaxElements;
  i = (int32_T)d - 1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &emlrtRTEI, (emlrtConstCTX)sp);
  for (b_i = 0; b_i <= i; b_i++) {
    i1 = b_obj->CollisionGeometries->size[1] - 1;
    expl_temp.CollisionPrimitive = t0_GeometryInternal;
    b_obj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, i1,
      &b_emlrtBCI, (emlrtConstCTX)sp)] = expl_temp;
  }

  b_obj->matlabCodegenIsDeleted = false;
  emxFree_robotics_manip_internal(&r);
  return b_obj;
}

static robotics_manip_internal_RigidBody *RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '7' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &w_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &x_emlrtRSI;
  b_st.site = &ab_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->JointInternal.Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   case 1:
    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   default:
    b_obj->JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  b_obj->ParentIndex = -1.0;
  st.site = &y_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *b_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '8' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &w_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &x_emlrtRSI;
  b_st.site = &ab_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->JointInternal.Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   case 1:
    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   default:
    b_obj->JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  b_obj->ParentIndex = -1.0;
  st.site = &y_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *c_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 0.27, 1.0 };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T cv[6] = { 'l', 'i', 'n', 'k', '_', '3' };

  static int8_T iv1[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[3] = { 0, 0, 1 };

  static int8_T iv2[3] = { 0, 1, 0 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &w_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 6;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 6; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 3.0;
  st.site = &eb_emlrtRSI;
  b_st.site = &ab_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 8;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 8; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   case 1:
    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   default:
    b_obj->JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv1[i];
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
  }

  st.site = &fb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *d_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 0.07, 1.0 };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T cv[6] = { 'l', 'i', 'n', 'k', '_', '4' };

  static int8_T iv1[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[3] = { 0, 0, 1 };

  static int8_T iv2[3] = { 1, 0, 0 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &w_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 6;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 6; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 4.0;
  st.site = &eb_emlrtRSI;
  b_st.site = &ab_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 8;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 8; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   case 1:
    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   default:
    b_obj->JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv1[i];
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
  }

  st.site = &fb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *e_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.302, 0.0, 0.0, 1.0 };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T cv[6] = { 'l', 'i', 'n', 'k', '_', '5' };

  static int8_T iv1[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[3] = { 0, 0, 1 };

  static int8_T iv2[3] = { 0, 1, 0 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &w_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 6;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 6; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 5.0;
  st.site = &eb_emlrtRSI;
  b_st.site = &ab_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 8;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 8; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   case 1:
    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   default:
    b_obj->JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv1[i];
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
  }

  st.site = &fb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *f_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.072, 0.0, 0.0, 1.0 };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T cv[6] = { 'l', 'i', 'n', 'k', '_', '6' };

  static int8_T iv1[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[3] = { 0, 0, 1 };

  static int8_T iv2[3] = { 1, 0, 0 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &w_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 6;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 6; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 6.0;
  st.site = &eb_emlrtRSI;
  b_st.site = &ab_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 8;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 8; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   case 1:
    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   default:
    b_obj->JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv1[i];
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
  }

  st.site = &fb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *g_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static char_T cv[5] = { 't', 'o', 'o', 'l', '0' };

  static char_T cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv1[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &w_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 7.0;
  st.site = &eb_emlrtRSI;
  b_st.site = &ab_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   case 1:
    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv[i];
    }
    break;

   default:
    b_obj->JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = (real_T)iv1[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv1[i];
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = 0.0;
  }

  st.site = &fb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static void mw__internal__call__reset(InstanceStruct_79W5648Ed9sN1fJCl9QFBC
  *moduleInstance, const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T d_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T f_u[5] = { 'r', 'e', 's', 'e', 't' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T e_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &hb_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      c_u[i] = d_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &c_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      c_u[i] = d_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      e_u[i] = f_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &e_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &d_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }
}

static void mw__internal__call__step(InstanceStruct_79W5648Ed9sN1fJCl9QFBC
  *moduleInstance, const emlrtStack *sp, real_T b_u0[6], real_T c_y0[16])
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 4 };

  static char_T d_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T f_u[4] = { 's', 't', 'e', 'p' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T e_u[4];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &ib_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      c_u[i] = d_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &c_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      c_u[i] = d_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 4; i++) {
      e_u[i] = f_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 4, m, &e_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &d_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (moduleInstance->sysobj.isInitialized != 1) {
    b_st.site = &d_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    SystemCore_setup(moduleInstance, &c_st, &moduleInstance->sysobj);
  }

  b_st.site = &d_emlrtRSI;
  GetTransformBlock_stepImpl(&b_st, &moduleInstance->sysobj, b_u0, c_y0);
}

static void GetTransformBlock_stepImpl(const emlrtStack *sp,
  robotics_slmanip_internal_block_GetTransformBlock *obj, real_T q[6], real_T
  tform[16])
{
  static const int32_T iv[2] = { 1, 52 };

  static const int32_T iv1[2] = { 1, 46 };

  static const int32_T iv10[2] = { 1, 25 };

  static const int32_T iv11[2] = { 1, 46 };

  static const int32_T iv12[2] = { 1, 46 };

  static const int32_T iv13[2] = { 1, 5 };

  static const int32_T iv14[2] = { 1, 46 };

  static const int32_T iv15[2] = { 1, 46 };

  static const int32_T iv16[2] = { 1, 4 };

  static const int32_T iv2[2] = { 1, 52 };

  static const int32_T iv3[2] = { 1, 38 };

  static const int32_T iv4[2] = { 1, 25 };

  static const int32_T iv5[2] = { 1, 46 };

  static const int32_T iv6[2] = { 1, 51 };

  static const int32_T iv7[2] = { 1, 38 };

  static const int32_T iv8[2] = { 1, 25 };

  static const int32_T iv9[2] = { 1, 45 };

  static char_T d_u[52] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'F', 'u',
    'n', 'c', 't', 'i', 'o', 'n', 'I', 'n', 'p', 'u', 't', 's', ':', 'e', 'x',
    'p', 'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T g_u[52] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'F', 'u',
    'n', 'c', 't', 'i', 'o', 'n', 'I', 'n', 'p', 'u', 't', 's', ':', 'e', 'x',
    'p', 'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T n_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'F', 'u',
    'n', 'c', 't', 'i', 'o', 'n', 'I', 'n', 'p', 'u', 't', 's', ':', 'i', 'n',
    'c', 'o', 'r', 'r', 'e', 'c', 't', 'S', 'i', 'z', 'e' };

  static char_T f_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T l_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T q_u[46] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'o', 'd', 'y', 'N', 'o',
    't', 'F', 'o', 'u', 'n', 'd' };

  static char_T p_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c',
    't', 'S', 'i', 'z', 'e' };

  static char_T j_u[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 's',
    ':', 'b', 'a', 'd', 'S', 'i', 'z', 'e', 'A', 'r', 'r', 'a', 'y' };

  static char_T k_u[25] = { 'j', 'o', 'i', 'n', 't', ' ', 'p', 'o', 's', 'i',
    't', 'i', 'o', 'n', ' ', 'v', 'e', 'c', 't', 'o', 'r', ' ', '(', 'q', ')' };

  static char_T s_u[5] = { 't', 'o', 'o', 'l', '0' };

  static char_T u_u[4] = { 'b', 'a', 's', 'e' };

  static int8_T iv17[4] = { 0, 0, 0, 1 };

  __m128d r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_cell_wrap *Ttree;
  emxArray_char_T *bname;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *m_y;
  const mxArray *n_y;
  const mxArray *o_y;
  const mxArray *p_y;
  const mxArray *q_y;
  const mxArray *y;
  robotics_manip_internal_RigidBody *c_obj;
  robotics_manip_internal_RigidBodyTree *b_obj;
  real_T T1[16];
  real_T T2[16];
  real_T d_R[16];
  real_T R[9];
  real_T b_R[9];
  real_T c_R[3];
  real_T sz[2];
  real_T b_sz;
  int32_T b_i;
  int32_T bid1;
  int32_T i;
  int32_T loop_ub;
  char_T c_u[52];
  char_T m_u[51];
  char_T e_u[46];
  char_T o_u[45];
  char_T h_u[38];
  char_T i_u[25];
  char_T r_u[5];
  char_T t_u[4];
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &jb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_obj = &obj->TreeInternal;
  b_st.site = &kb_emlrtRSI;
  sz[0] = obj->TreeInternal.PositionNumber;
  sz[1] = 1.0;
  c_st.site = &ob_emlrtRSI;
  d_st.site = &pb_emlrtRSI;
  p = true;
  bid1 = 0;
  exitg1 = false;
  while ((!exitg1) && (bid1 < 6)) {
    if (!muDoubleScalarIsNaN(q[bid1])) {
      bid1++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (i = 0; i < 52; i++) {
      c_u[i] = d_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&d_st, 52, m, &c_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 46; i++) {
      e_u[i] = f_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&d_st, 46, m, &e_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 25; i++) {
      i_u[i] = k_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&d_st, 25, m, &i_u[0]);
    emlrtAssign(&e_y, m);
    e_st.site = &qc_emlrtRSI;
    error(&e_st, y, getString(&e_st, message(&e_st, b_y, e_y, &c_emlrtMCI),
           &c_emlrtMCI), &c_emlrtMCI);
  }

  d_st.site = &pb_emlrtRSI;
  p = true;
  bid1 = 0;
  exitg1 = false;
  while ((!exitg1) && (bid1 < 6)) {
    if ((!muDoubleScalarIsInf(q[bid1])) && (!muDoubleScalarIsNaN(q[bid1]))) {
      bid1++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (i = 0; i < 52; i++) {
      c_u[i] = g_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&d_st, 52, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 46; i++) {
      e_u[i] = l_u[i];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&d_st, 46, m, &e_u[0]);
    emlrtAssign(&f_y, m);
    for (i = 0; i < 25; i++) {
      i_u[i] = k_u[i];
    }

    i_y = NULL;
    m = emlrtCreateCharArray(2, &iv8[0]);
    emlrtInitCharArrayR2013a(&d_st, 25, m, &i_u[0]);
    emlrtAssign(&i_y, m);
    e_st.site = &pc_emlrtRSI;
    error(&e_st, c_y, getString(&e_st, message(&e_st, f_y, i_y, &d_emlrtMCI),
           &d_emlrtMCI), &d_emlrtMCI);
  }

  d_st.site = &pb_emlrtRSI;
  p = true;
  for (bid1 = 0; bid1 < 2; bid1++) {
    b_sz = sz[bid1];
    if (p && ((b_sz != b_sz) || ((!muDoubleScalarIsInf(b_sz)) && (b_sz >= 0.0) &&
          (b_sz == muDoubleScalarFloor(b_sz))))) {
      p = true;
    } else {
      p = false;
    }
  }

  if (!p) {
    for (i = 0; i < 38; i++) {
      h_u[i] = j_u[i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&d_st, 38, m, &h_u[0]);
    emlrtAssign(&d_y, m);
    for (i = 0; i < 38; i++) {
      h_u[i] = j_u[i];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&d_st, 38, m, &h_u[0]);
    emlrtAssign(&h_y, m);
    e_st.site = &yc_emlrtRSI;
    error(&e_st, d_y, getString(&e_st, b_message(&e_st, h_y, &e_emlrtMCI),
           &e_emlrtMCI), &e_emlrtMCI);
  }

  p = true;
  for (bid1 = 0; bid1 < 2; bid1++) {
    b_sz = sz[bid1];
    if (p) {
      if (b_sz != b_sz) {
        p = true;
      } else {
        if (bid1 + 1 <= 1) {
          i = 6;
        } else {
          i = 1;
        }

        if (b_sz == (real_T)i) {
          p = true;
        } else {
          p = false;
        }
      }
    } else {
      p = false;
    }
  }

  if (!p) {
    for (i = 0; i < 51; i++) {
      m_u[i] = n_u[i];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(&d_st, 51, m, &m_u[0]);
    emlrtAssign(&g_y, m);
    for (i = 0; i < 45; i++) {
      o_u[i] = p_u[i];
    }

    j_y = NULL;
    m = emlrtCreateCharArray(2, &iv9[0]);
    emlrtInitCharArrayR2013a(&d_st, 45, m, &o_u[0]);
    emlrtAssign(&j_y, m);
    for (i = 0; i < 25; i++) {
      i_u[i] = k_u[i];
    }

    k_y = NULL;
    m = emlrtCreateCharArray(2, &iv10[0]);
    emlrtInitCharArrayR2013a(&d_st, 25, m, &i_u[0]);
    emlrtAssign(&k_y, m);
    e_st.site = &oc_emlrtRSI;
    error(&e_st, g_y, getString(&e_st, message(&e_st, j_y, k_y, &f_emlrtMCI),
           &f_emlrtMCI), &f_emlrtMCI);
  }

  emxInit_cell_wrap(&Ttree, 2);
  b_st.site = &lb_emlrtRSI;
  RigidBodyTree_forwardKinematics(&b_st, &obj->TreeInternal, q, Ttree);
  b_st.site = &mb_emlrtRSI;
  c_st.site = &fc_emlrtRSI;
  bid1 = -2;
  emxInit_char_T(&bname, 2);
  d_st.site = &hc_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = obj->TreeInternal.Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = obj->TreeInternal.Base.NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    bname->data[i] = obj->TreeInternal.Base.NameInternal->data[i];
  }

  if (d_strcmp(bname)) {
    bid1 = -1;
  } else {
    b_sz = obj->TreeInternal.NumBodies;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, b_sz, mxDOUBLE_CLASS, (int32_T)b_sz,
      &b_emlrtRTEI, &c_st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)b_sz - 1)) {
      d_st.site = &ic_emlrtRSI;
      c_obj = b_obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 7, &c_emlrtBCI,
        &d_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = c_obj->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = c_obj->NameInternal->size[1];
      for (i = 0; i < loop_ub; i++) {
        bname->data[i] = c_obj->NameInternal->data[i];
      }

      if (d_strcmp(bname)) {
        bid1 = b_i;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  if (bid1 + 1 == -1) {
    c_st.site = &gc_emlrtRSI;
    for (i = 0; i < 46; i++) {
      e_u[i] = q_u[i];
    }

    l_y = NULL;
    m = emlrtCreateCharArray(2, &iv11[0]);
    emlrtInitCharArrayR2013a(&c_st, 46, m, &e_u[0]);
    emlrtAssign(&l_y, m);
    for (i = 0; i < 46; i++) {
      e_u[i] = q_u[i];
    }

    m_y = NULL;
    m = emlrtCreateCharArray(2, &iv12[0]);
    emlrtInitCharArrayR2013a(&c_st, 46, m, &e_u[0]);
    emlrtAssign(&m_y, m);
    for (i = 0; i < 5; i++) {
      r_u[i] = s_u[i];
    }

    n_y = NULL;
    m = emlrtCreateCharArray(2, &iv13[0]);
    emlrtInitCharArrayR2013a(&c_st, 5, m, &r_u[0]);
    emlrtAssign(&n_y, m);
    d_st.site = &nc_emlrtRSI;
    error(&d_st, l_y, getString(&d_st, message(&d_st, m_y, n_y, &o_emlrtMCI),
           &o_emlrtMCI), &o_emlrtMCI);
  }

  if (bid1 + 1 == 0) {
    for (i = 0; i < 16; i++) {
      T1[i] = 0.0;
    }

    for (bid1 = 0; bid1 < 4; bid1++) {
      T1[bid1 + (bid1 << 2)] = 1.0;
    }
  } else {
    for (i = 0; i < 16; i++) {
      loop_ub = Ttree->size[1] - 1;
      T1[i] = Ttree->data[emlrtDynamicBoundsCheckR2012b(bid1, 0, loop_ub,
        &d_emlrtBCI, &st)].f1[i];
    }
  }

  b_st.site = &nb_emlrtRSI;
  c_st.site = &fc_emlrtRSI;
  bid1 = -2;
  d_st.site = &hc_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = obj->TreeInternal.Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = obj->TreeInternal.Base.NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    bname->data[i] = obj->TreeInternal.Base.NameInternal->data[i];
  }

  if (e_strcmp(bname)) {
    bid1 = -1;
  } else {
    b_sz = obj->TreeInternal.NumBodies;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, b_sz, mxDOUBLE_CLASS, (int32_T)b_sz,
      &b_emlrtRTEI, &c_st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)b_sz - 1)) {
      d_st.site = &ic_emlrtRSI;
      c_obj = b_obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 7, &c_emlrtBCI,
        &d_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = c_obj->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = c_obj->NameInternal->size[1];
      for (i = 0; i < loop_ub; i++) {
        bname->data[i] = c_obj->NameInternal->data[i];
      }

      if (e_strcmp(bname)) {
        bid1 = b_i;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  emxFree_char_T(&bname);
  if (bid1 + 1 == -1) {
    c_st.site = &gc_emlrtRSI;
    for (i = 0; i < 46; i++) {
      e_u[i] = q_u[i];
    }

    o_y = NULL;
    m = emlrtCreateCharArray(2, &iv14[0]);
    emlrtInitCharArrayR2013a(&c_st, 46, m, &e_u[0]);
    emlrtAssign(&o_y, m);
    for (i = 0; i < 46; i++) {
      e_u[i] = q_u[i];
    }

    p_y = NULL;
    m = emlrtCreateCharArray(2, &iv15[0]);
    emlrtInitCharArrayR2013a(&c_st, 46, m, &e_u[0]);
    emlrtAssign(&p_y, m);
    for (i = 0; i < 4; i++) {
      t_u[i] = u_u[i];
    }

    q_y = NULL;
    m = emlrtCreateCharArray(2, &iv16[0]);
    emlrtInitCharArrayR2013a(&c_st, 4, m, &t_u[0]);
    emlrtAssign(&q_y, m);
    d_st.site = &nc_emlrtRSI;
    error(&d_st, o_y, getString(&d_st, message(&d_st, p_y, q_y, &o_emlrtMCI),
           &o_emlrtMCI), &o_emlrtMCI);
  }

  if (bid1 + 1 == 0) {
    for (i = 0; i < 16; i++) {
      T2[i] = 0.0;
    }

    for (bid1 = 0; bid1 < 4; bid1++) {
      T2[bid1 + (bid1 << 2)] = 1.0;
    }
  } else {
    for (i = 0; i < 16; i++) {
      loop_ub = Ttree->size[1] - 1;
      T2[i] = Ttree->data[emlrtDynamicBoundsCheckR2012b(bid1, 0, loop_ub,
        &e_emlrtBCI, &st)].f1[i];
    }
  }

  emxFree_cell_wrap(&Ttree);
  for (i = 0; i < 3; i++) {
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      R[loop_ub + 3 * i] = T2[i + (loop_ub << 2)];
    }
  }

  for (i = 0; i <= 6; i += 2) {
    r = _mm_loadu_pd(&R[i]);
    _mm_storeu_pd(&b_R[i], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
  }

  for (i = 8; i < 9; i++) {
    b_R[8] = -R[8];
  }

  for (i = 0; i < 3; i++) {
    c_R[i] = 0.0;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_sz = c_R[i] + b_R[i + 3 * loop_ub] * T2[loop_ub + 12];
      d_R[loop_ub + (i << 2)] = R[loop_ub + 3 * i];
      c_R[i] = b_sz;
    }

    d_R[i + 12] = c_R[i];
  }

  for (i = 0; i < 4; i++) {
    d_R[(i << 2) + 3] = (real_T)iv17[i];
  }

  for (i = 0; i < 4; i++) {
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      tform[i + (loop_ub << 2)] = 0.0;
      for (bid1 = 0; bid1 < 4; bid1++) {
        tform[i + (loop_ub << 2)] += d_R[i + (bid1 << 2)] * T1[bid1 + (loop_ub <<
          2)];
      }
    }
  }
}

static void RigidBodyTree_forwardKinematics(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree *obj, real_T qvec[6], emxArray_cell_wrap
  *Ttree)
{
  static const int32_T iv1[2] = { 1, 28 };

  static const int32_T iv10[2] = { 1, 15 };

  static const int32_T iv11[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 21 };

  static const int32_T iv3[2] = { 1, 28 };

  static const int32_T iv4[2] = { 1, 21 };

  static const int32_T iv5[2] = { 1, 39 };

  static const int32_T iv6[2] = { 1, 15 };

  static const int32_T iv7[2] = { 1, 45 };

  static const int32_T iv8[2] = { 1, 39 };

  static char_T l_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T j_u[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
    'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  static char_T d_u[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I', 'n',
    'p', 'u', 't' };

  static char_T f_u[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  static char_T k_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv9[4] = { 0, 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *y;
  robotics_manip_internal_RigidBody *body;
  real_T a[16];
  real_T b_a[16];
  real_T c_b[16];
  real_T d_b[16];
  real_T v_data[4];
  real_T v[3];
  real_T k;
  real_T n;
  real_T pnum;
  int32_T v_size[2];
  int32_T b_i;
  int32_T exitg1;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T jtilecol;
  int32_T ntilecols;
  char_T i_u[45];
  char_T g_u[39];
  char_T c_u[28];
  char_T e_u[21];
  char_T h_u[15];
  int8_T t1_f1[16];
  int8_T b_I[9];
  boolean_T result;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  n = obj->NumBodies;
  st.site = &qb_emlrtRSI;
  for (i = 0; i < 16; i++) {
    t1_f1[i] = iv[i];
  }

  b_st.site = &sb_emlrtRSI;
  if ((n != muDoubleScalarFloor(n)) || muDoubleScalarIsInf(n) || (n <
       -2.147483648E+9) || (n > 2.147483647E+9)) {
    for (i = 0; i < 28; i++) {
      c_u[i] = d_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 28, m, &c_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 28; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&b_st, 28, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    d_y = NULL;
    m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)emlrtMxGetData(m) = MIN_int32_T;
    emlrtAssign(&d_y, m);
    f_y = NULL;
    m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)emlrtMxGetData(m) = MAX_int32_T;
    emlrtAssign(&f_y, m);
    c_st.site = &xc_emlrtRSI;
    error(&c_st, y, getString(&c_st, c_message(&c_st, c_y, d_y, f_y, &h_emlrtMCI),
           &h_emlrtMCI), &h_emlrtMCI);
  }

  if (n <= 0.0) {
    pnum = 0.0;
  } else {
    pnum = n;
  }

  if (!(pnum <= 2.147483647E+9)) {
    for (i = 0; i < 21; i++) {
      e_u[i] = f_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&b_st, 21, m, &e_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 21; i++) {
      e_u[i] = f_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&b_st, 21, m, &e_u[0]);
    emlrtAssign(&e_y, m);
    c_st.site = &wc_emlrtRSI;
    error(&c_st, b_y, getString(&c_st, b_message(&c_st, e_y, &i_emlrtMCI),
           &i_emlrtMCI), &i_emlrtMCI);
  }

  emlrtNonNegativeCheckR2012b(n, &d_emlrtDCI, &st);
  emlrtNonNegativeCheckR2012b(n, &d_emlrtDCI, &st);
  i = Ttree->size[0] * Ttree->size[1];
  Ttree->size[0] = 1;
  Ttree->size[1] = (int32_T)n;
  emxEnsureCapacity_cell_wrap(Ttree, i);
  if ((int32_T)n != 0) {
    ntilecols = (int32_T)n - 1;
    for (jtilecol = 0; jtilecol <= ntilecols; jtilecol++) {
      for (i = 0; i < 16; i++) {
        Ttree->data[jtilecol].f1[i] = (real_T)t1_f1[i];
      }
    }
  }

  k = 1.0;
  i = (int32_T)n - 1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, n, mxDOUBLE_CLASS, (int32_T)n,
    &c_emlrtRTEI, (emlrtConstCTX)sp);
  emxInit_char_T(&switch_expression, 2);
  for (b_i = 0; b_i <= i; b_i++) {
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 7, &i_emlrtBCI,
      (emlrtConstCTX)sp)];
    pnum = body->JointInternal.PositionNumber;
    n = (k + pnum) - 1.0;
    if (k > n) {
      i1 = 0;
      i2 = 0;
    } else {
      i1 = (int32_T)emlrtIntegerCheckR2012b(k, &f_emlrtDCI, (emlrtConstCTX)sp);
      i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &h_emlrtBCI, (emlrtConstCTX)
        sp) - 1;
      i2 = (int32_T)emlrtIntegerCheckR2012b(n, &e_emlrtDCI, (emlrtConstCTX)sp);
      i2 = emlrtDynamicBoundsCheckR2012b(i2, 1, 6, &g_emlrtBCI, (emlrtConstCTX)
        sp);
    }

    st.site = &rb_emlrtRSI;
    for (i3 = 0; i3 < 16; i3++) {
      a[i3] = body->JointInternal.JointToParentTransform[i3];
    }

    b_st.site = &tb_emlrtRSI;
    i3 = switch_expression->size[0] * switch_expression->size[1];
    switch_expression->size[0] = 1;
    switch_expression->size[1] = body->JointInternal.Type->size[1];
    emxEnsureCapacity_char_T(switch_expression, i3);
    ntilecols = body->JointInternal.Type->size[1];
    for (i3 = 0; i3 < ntilecols; i3++) {
      switch_expression->data[i3] = body->JointInternal.Type->data[i3];
    }

    result = false;
    if (switch_expression->size[1] != 5) {
    } else {
      ntilecols = 1;
      do {
        exitg1 = 0;
        if (ntilecols - 1 < 5) {
          if (cv[ntilecols - 1] != switch_expression->data[ntilecols - 1]) {
            exitg1 = 1;
          } else {
            ntilecols++;
          }
        } else {
          result = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (result) {
      ntilecols = 0;
    } else if (b_strcmp(switch_expression)) {
      ntilecols = 1;
    } else {
      ntilecols = -1;
    }

    switch (ntilecols) {
     case 0:
      for (i1 = 0; i1 < 16; i1++) {
        c_b[i1] = 0.0;
      }

      for (ntilecols = 0; ntilecols < 4; ntilecols++) {
        c_b[ntilecols + (ntilecols << 2)] = 1.0;
      }
      break;

     case 1:
      c_st.site = &ub_emlrtRSI;
      rigidBodyJoint_get_JointAxis(&body->JointInternal, v);
      if ((i2 - i1 == 1) || (i2 - i1 == 0)) {
      } else {
        for (i3 = 0; i3 < 39; i3++) {
          g_u[i3] = j_u[i3];
        }

        g_y = NULL;
        m = emlrtCreateCharArray(2, &iv5[0]);
        emlrtInitCharArrayR2013a(&b_st, 39, m, &g_u[0]);
        emlrtAssign(&g_y, m);
        for (i3 = 0; i3 < 39; i3++) {
          g_u[i3] = j_u[i3];
        }

        j_y = NULL;
        m = emlrtCreateCharArray(2, &iv8[0]);
        emlrtInitCharArrayR2013a(&b_st, 39, m, &g_u[0]);
        emlrtAssign(&j_y, m);
        c_st.site = &tc_emlrtRSI;
        error(&c_st, g_y, getString(&c_st, b_message(&c_st, j_y, &j_emlrtMCI),
               &j_emlrtMCI), &j_emlrtMCI);
      }

      if (i2 - i1 != 0) {
        ntilecols = 1;
      } else {
        ntilecols = 0;
      }

      v_size[0] = 1;
      v_size[1] = ntilecols + 3;
      for (i2 = 0; i2 < 3; i2++) {
        v_data[i2] = v[i2];
      }

      for (i2 = 0; i2 < ntilecols; i2++) {
        v_data[3] = qvec[i1];
      }

      c_st.site = &vb_emlrtRSI;
      axang2tform(&c_st, v_data, v_size, c_b);
      break;

     default:
      c_st.site = &wb_emlrtRSI;
      rigidBodyJoint_get_JointAxis(&body->JointInternal, v);
      c_st.site = &xb_emlrtRSI;
      if (i2 - i1 != 1) {
        if (i2 - i1 == 1) {
          for (i2 = 0; i2 < 45; i2++) {
            i_u[i2] = l_u[i2];
          }

          i_y = NULL;
          m = emlrtCreateCharArray(2, &iv7[0]);
          emlrtInitCharArrayR2013a(&c_st, 45, m, &i_u[0]);
          emlrtAssign(&i_y, m);
          for (i2 = 0; i2 < 45; i2++) {
            i_u[i2] = l_u[i2];
          }

          l_y = NULL;
          m = emlrtCreateCharArray(2, &iv11[0]);
          emlrtInitCharArrayR2013a(&c_st, 45, m, &i_u[0]);
          emlrtAssign(&l_y, m);
          d_st.site = &uc_emlrtRSI;
          error(&d_st, i_y, getString(&d_st, b_message(&d_st, l_y, &n_emlrtMCI),
                 &n_emlrtMCI), &n_emlrtMCI);
        } else {
          for (i2 = 0; i2 < 15; i2++) {
            h_u[i2] = k_u[i2];
          }

          h_y = NULL;
          m = emlrtCreateCharArray(2, &iv6[0]);
          emlrtInitCharArrayR2013a(&c_st, 15, m, &h_u[0]);
          emlrtAssign(&h_y, m);
          for (i2 = 0; i2 < 15; i2++) {
            h_u[i2] = k_u[i2];
          }

          k_y = NULL;
          m = emlrtCreateCharArray(2, &iv10[0]);
          emlrtInitCharArrayR2013a(&c_st, 15, m, &h_u[0]);
          emlrtAssign(&k_y, m);
          d_st.site = &vc_emlrtRSI;
          error(&d_st, h_y, getString(&d_st, b_message(&d_st, k_y, &m_emlrtMCI),
                 &m_emlrtMCI), &m_emlrtMCI);
        }
      }

      for (i2 = 0; i2 < 9; i2++) {
        b_I[i2] = 0;
      }

      for (ntilecols = 0; ntilecols < 3; ntilecols++) {
        b_I[ntilecols + 3 * ntilecols] = 1;
      }

      for (i2 = 0; i2 < 3; i2++) {
        for (i3 = 0; i3 < 3; i3++) {
          c_b[i3 + (i2 << 2)] = (real_T)b_I[i3 + 3 * i2];
        }

        c_b[i2 + 12] = v[i2] * qvec[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        c_b[(i1 << 2) + 3] = (real_T)iv9[i1];
      }
      break;
    }

    for (i1 = 0; i1 < 16; i1++) {
      d_b[i1] = body->JointInternal.ChildToJointTransform[i1];
    }

    for (i1 = 0; i1 < 4; i1++) {
      for (i2 = 0; i2 < 4; i2++) {
        b_a[i1 + (i2 << 2)] = 0.0;
        for (i3 = 0; i3 < 4; i3++) {
          b_a[i1 + (i2 << 2)] += a[i1 + (i3 << 2)] * c_b[i3 + (i2 << 2)];
        }
      }
    }

    for (i1 = 0; i1 < 4; i1++) {
      for (i2 = 0; i2 < 4; i2++) {
        i3 = Ttree->size[1] - 1;
        Ttree->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, i3, &j_emlrtBCI, &st)]
          .f1[i1 + (i2 << 2)] = 0.0;
        for (i3 = 0; i3 < 4; i3++) {
          ntilecols = Ttree->size[1] - 1;
          jtilecol = Ttree->size[1] - 1;
          Ttree->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, ntilecols,
            &j_emlrtBCI, &st)].f1[i1 + (i2 << 2)] = Ttree->
            data[emlrtDynamicBoundsCheckR2012b(b_i, 0, jtilecol, &j_emlrtBCI,
            &st)].f1[i1 + (i2 << 2)] + b_a[i1 + (i3 << 2)] * d_b[i3 + (i2 << 2)];
        }
      }
    }

    k += pnum;
    if (body->ParentIndex > 0.0) {
      for (i1 = 0; i1 < 16; i1++) {
        i2 = Ttree->size[1] - 1;
        i3 = (int32_T)emlrtIntegerCheckR2012b(body->ParentIndex, &g_emlrtDCI,
          (emlrtConstCTX)sp) - 1;
        a[i1] = Ttree->data[emlrtDynamicBoundsCheckR2012b(i3, 0, i2, &k_emlrtBCI,
          (emlrtConstCTX)sp)].f1[i1];
      }

      i1 = Ttree->size[1] - 1;
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &f_emlrtBCI, (emlrtConstCTX)sp);
      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          b_a[i1 + (i2 << 2)] = 0.0;
          for (i3 = 0; i3 < 4; i3++) {
            b_a[i1 + (i2 << 2)] += a[i1 + (i3 << 2)] * Ttree->data[b_i].f1[i3 +
              (i2 << 2)];
          }
        }
      }

      i1 = Ttree->size[1] - 1;
      memcpy(&Ttree->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &l_emlrtBCI,
              (emlrtConstCTX)sp)].f1[0], &b_a[0], sizeof(real_T) << 4);
    }
  }

  emxFree_char_T(&switch_expression);
}

static void rigidBodyJoint_get_JointAxis(rigidBodyJoint *obj, real_T ax[3])
{
  static char_T cv1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static char_T cv[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  emxArray_char_T *a;
  int32_T exitg1;
  int32_T i;
  int32_T loop_ub;
  boolean_T b_bool;
  boolean_T guard1;
  emxInit_char_T(&a, 2);
  i = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = obj->Type->size[1];
  emxEnsureCapacity_char_T(a, i);
  loop_ub = obj->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = obj->Type->data[i];
  }

  b_bool = false;
  if (a->size[1] != 8) {
  } else {
    loop_ub = 1;
    do {
      exitg1 = 0;
      if (loop_ub - 1 < 8) {
        if (a->data[loop_ub - 1] != cv[loop_ub - 1]) {
          exitg1 = 1;
        } else {
          loop_ub++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  guard1 = false;
  if (b_bool) {
    guard1 = true;
  } else {
    i = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = obj->Type->size[1];
    emxEnsureCapacity_char_T(a, i);
    loop_ub = obj->Type->size[1];
    for (i = 0; i < loop_ub; i++) {
      a->data[i] = obj->Type->data[i];
    }

    b_bool = false;
    if (a->size[1] != 9) {
    } else {
      loop_ub = 1;
      do {
        exitg1 = 0;
        if (loop_ub - 1 < 9) {
          if (a->data[loop_ub - 1] != cv1[loop_ub - 1]) {
            exitg1 = 1;
          } else {
            loop_ub++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      guard1 = true;
    } else {
      for (i = 0; i < 3; i++) {
        ax[i] = rtNaN;
      }
    }
  }

  if (guard1) {
    for (i = 0; i < 3; i++) {
      ax[i] = obj->JointAxisInternal[i];
    }
  }

  emxFree_char_T(&a);
}

static void axang2tform(const emlrtStack *sp, real_T axang_data[], int32_T
  axang_size[2], real_T H[16])
{
  static const int32_T iv[2] = { 1, 35 };

  static const int32_T iv1[2] = { 1, 48 };

  static const int32_T iv2[2] = { 1, 30 };

  static const int32_T iv3[2] = { 1, 5 };

  static const int32_T iv4[2] = { 1, 30 };

  static const int32_T iv5[2] = { 1, 4 };

  static char_T f_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c',
    't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static char_T d_u[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'a', 'x', 'a',
    'n', 'g', '2', 't', 'f', 'o', 'r', 'm', ':', 'i', 'n', 'c', 'o', 'r', 'r',
    'e', 'c', 't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static char_T i_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  static char_T j_u[5] = { 'a', 'x', 'a', 'n', 'g' };

  static char_T l_u[4] = { 's', 'q', 'r', 't' };

  __m128d r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *m;
  const mxArray *y;
  real_T R[9];
  real_T tempR[9];
  real_T v[3];
  real_T cth;
  real_T theta;
  int32_T b_k;
  int32_T k;
  char_T e_u[48];
  char_T c_u[35];
  char_T g_u[30];
  char_T h_u[5];
  char_T k_u[4];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &yb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &bc_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  if (axang_size[1] != 4) {
    for (k = 0; k < 35; k++) {
      c_u[k] = d_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&c_st, 35, m, &c_u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 48; k++) {
      e_u[k] = f_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&c_st, 48, m, &e_u[0]);
    emlrtAssign(&b_y, m);
    for (k = 0; k < 5; k++) {
      h_u[k] = j_u[k];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&c_st, 5, m, &h_u[0]);
    emlrtAssign(&d_y, m);
    e_y = NULL;
    m = emlrtCreateDoubleScalar(4.0);
    emlrtAssign(&e_y, m);
    d_st.site = &sc_emlrtRSI;
    error(&d_st, y, getString(&d_st, c_message(&d_st, b_y, d_y, e_y, &k_emlrtMCI),
           &k_emlrtMCI), &k_emlrtMCI);
  }

  st.site = &ac_emlrtRSI;
  b_st.site = &cc_emlrtRSI;
  c_st.site = &dc_emlrtRSI;
  for (k = 0; k <= 0; k += 2) {
    r = _mm_loadu_pd(&axang_data[0]);
    _mm_storeu_pd(&v[0], _mm_mul_pd(r, r));
  }

  for (k = 2; k < 3; k++) {
    theta = axang_data[2];
    v[2] = theta * theta;
  }

  theta = sumColumnB(v);
  d_st.site = &ec_emlrtRSI;
  if (theta < 0.0) {
    for (k = 0; k < 30; k++) {
      g_u[k] = i_u[k];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&d_st, 30, m, &g_u[0]);
    emlrtAssign(&c_y, m);
    for (k = 0; k < 30; k++) {
      g_u[k] = i_u[k];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&d_st, 30, m, &g_u[0]);
    emlrtAssign(&f_y, m);
    for (k = 0; k < 4; k++) {
      k_u[k] = l_u[k];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&d_st, 4, m, &k_u[0]);
    emlrtAssign(&g_y, m);
    e_st.site = &mc_emlrtRSI;
    error(&e_st, c_y, getString(&e_st, message(&e_st, f_y, g_y, &l_emlrtMCI),
           &l_emlrtMCI), &l_emlrtMCI);
  }

  theta = 1.0 / muDoubleScalarSqrt(theta);
  for (k = 0; k <= 0; k += 2) {
    r = _mm_loadu_pd(&axang_data[0]);
    _mm_storeu_pd(&v[0], _mm_mul_pd(r, _mm_set1_pd(theta)));
  }

  for (k = 2; k < 3; k++) {
    v[2] = axang_data[2] * theta;
  }

  emlrtDynamicBoundsCheckR2012b(4, 1, axang_size[1], &m_emlrtBCI, &b_st);
  theta = axang_data[3];
  cth = muDoubleScalarCos(theta);
  theta = muDoubleScalarSin(theta);
  R[0] = v[0] * v[0] * (1.0 - cth) + cth;
  R[1] = v[0] * v[1] * (1.0 - cth) - v[2] * theta;
  R[2] = v[0] * v[2] * (1.0 - cth) + v[1] * theta;
  R[3] = v[0] * v[1] * (1.0 - cth) + v[2] * theta;
  R[4] = v[1] * v[1] * (1.0 - cth) + cth;
  R[5] = v[1] * v[2] * (1.0 - cth) - v[0] * theta;
  R[6] = v[0] * v[2] * (1.0 - cth) - v[1] * theta;
  R[7] = v[1] * v[2] * (1.0 - cth) + v[0] * theta;
  R[8] = v[2] * v[2] * (1.0 - cth) + cth;
  memcpy(&tempR[0], &R[0], 9U * sizeof(real_T));
  for (k = 0; k < 3; k++) {
    for (b_k = 0; b_k < 3; b_k++) {
      R[k + 3 * b_k] = tempR[b_k + 3 * k];
    }
  }

  for (k = 0; k < 16; k++) {
    H[k] = 0.0;
  }

  for (k = 0; k < 3; k++) {
    for (b_k = 0; b_k < 3; b_k++) {
      H[b_k + (k << 2)] = R[b_k + 3 * k];
    }
  }

  H[15] = 1.0;
}

static real_T sumColumnB(real_T x[3])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 2; k++) {
    y += x[k + 1];
  }

  return y;
}

static boolean_T d_strcmp(emxArray_char_T *a)
{
  static char_T cv[5] = { 't', 'o', 'o', 'l', '0' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (a->size[1] != 5) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 5) {
        if (a->data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static boolean_T e_strcmp(emxArray_char_T *a)
{
  static char_T cv[4] = { 'b', 'a', 's', 'e' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (a->size[1] != 4) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 4) {
        if (a->data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void handle_matlabCodegenDestructor(const emlrtStack *sp,
  robotics_manip_internal_CollisionSet *obj)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  robotics_manip_internal_CollisionGeometry expl_temp;
  robotics_manip_internal_CollisionGeometry r;
  real_T d;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    st.site = &jc_emlrtRSI;
    d = obj->Size;
    i = (int32_T)d - 1;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &d_emlrtRTEI, &st);
    for (b_i = 0; b_i <= i; b_i++) {
      b_st.site = &kc_emlrtRSI;
      i1 = obj->CollisionGeometries->size[1] - 1;
      r = obj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(b_i, 0,
        i1, &o_emlrtBCI, &b_st)];
      c_st.site = &lc_emlrtRSI;
      collisioncodegen_destructGeometry(&r.CollisionPrimitive);
      i1 = obj->CollisionGeometries->size[1] - 1;
      expl_temp.CollisionPrimitive = r.CollisionPrimitive;
      obj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, i1,
        &n_emlrtBCI, &st)] = expl_temp;
    }
  }
}

static const mxArray *message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 2, &pArrays[0],
    "message", true, location);
}

static const mxArray *getString(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 1, &pArray, "getString",
    true, location);
}

static void error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, NULL, 2, &pArrays[0], "error",
                        true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 1, &pArray, "message",
    true, location);
}

static const mxArray *c_message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 3, &pArrays[0],
    "message", true, location);
}

static real_T eml_rand_mt19937ar(const emlrtStack *sp, uint32_T d_state[625])
{
  static const int32_T iv[2] = { 1, 37 };

  static const int32_T iv1[2] = { 1, 37 };

  static char_T e_u[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  real_T r;
  int32_T exitg1;
  int32_T k;
  int32_T kk;
  uint32_T c_u[2];
  uint32_T mti;
  uint32_T y;
  char_T d_u[37];
  boolean_T exitg2;
  boolean_T isvalid;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &p_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on:        */
  /*                                                                         */
  /*  A C-program for MT19937, with initialization improved 2002/1/26.       */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto.                        */
  /*                                                                         */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
  /*  All rights reserved.                                                   */
  /*                                                                         */
  /*  Redistribution and use in source and binary forms, with or without     */
  /*  modification, are permitted provided that the following conditions     */
  /*  are met:                                                               */
  /*                                                                         */
  /*    1. Redistributions of source code must retain the above copyright    */
  /*       notice, this list of conditions and the following disclaimer.     */
  /*                                                                         */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer      */
  /*       in the documentation and/or other materials provided with the     */
  /*       distribution.                                                     */
  /*                                                                         */
  /*    3. The names of its contributors may not be used to endorse or       */
  /*       promote products derived from this software without specific      */
  /*       prior written permission.                                         */
  /*                                                                         */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
  /*                                                                         */
  /* =============================   END   ================================= */
  do {
    exitg1 = 0;
    for (k = 0; k < 2; k++) {
      mti = d_state[624] + 1U;
      if (mti >= 625U) {
        for (kk = 0; kk < 227; kk++) {
          y = (d_state[kk] & 2147483648U) | (d_state[kk + 1] & 2147483647U);
          if ((y & 1U) == 0U) {
            y >>= 1U;
          } else {
            y = y >> 1U ^ 2567483615U;
          }

          d_state[kk] = d_state[kk + 397] ^ y;
        }

        for (kk = 0; kk < 396; kk++) {
          y = (d_state[kk + 227] & 2147483648U) | (d_state[kk + 228] &
            2147483647U);
          if ((y & 1U) == 0U) {
            y >>= 1U;
          } else {
            y = y >> 1U ^ 2567483615U;
          }

          d_state[kk + 227] = d_state[kk] ^ y;
        }

        y = (d_state[623] & 2147483648U) | (d_state[0] & 2147483647U);
        if ((y & 1U) == 0U) {
          y >>= 1U;
        } else {
          y = y >> 1U ^ 2567483615U;
        }

        d_state[623] = d_state[396] ^ y;
        mti = 1U;
      }

      y = d_state[(int32_T)mti - 1];
      d_state[624] = mti;
      y ^= y >> 11U;
      y ^= y << 7U & 2636928640U;
      y ^= y << 15U & 4022730752U;
      y ^= y >> 18U;
      c_u[k] = y;
    }

    r = 1.1102230246251565E-16 * ((real_T)(c_u[0] >> 5U) * 6.7108864E+7 +
      (real_T)(c_u[1] >> 6U));
    if (r == 0.0) {
      if ((d_state[624] >= 1U) && (d_state[624] < 625U)) {
        isvalid = true;
      } else {
        isvalid = false;
      }

      if (isvalid) {
        isvalid = false;
        k = 0;
        exitg2 = false;
        while ((!exitg2) && (k + 1 < 625)) {
          if (d_state[k] == 0U) {
            k++;
          } else {
            isvalid = true;
            exitg2 = true;
          }
        }
      }

      if (!isvalid) {
        for (k = 0; k < 37; k++) {
          d_u[k] = e_u[k];
        }

        b_y = NULL;
        m = emlrtCreateCharArray(2, &iv[0]);
        emlrtInitCharArrayR2013a(&st, 37, m, &d_u[0]);
        emlrtAssign(&b_y, m);
        for (k = 0; k < 37; k++) {
          d_u[k] = e_u[k];
        }

        c_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(&st, 37, m, &d_u[0]);
        emlrtAssign(&c_y, m);
        b_st.site = &rc_emlrtRSI;
        error(&b_st, b_y, getString(&b_st, b_message(&b_st, c_y, &b_emlrtMCI),
               &b_emlrtMCI), &b_emlrtMCI);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return r;
}

static void emxInitStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_GetTransformBlock *pStruct)
{
  emxInitStruct_robotics_manip_in(&pStruct->TreeInternal);
}

static void emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct)
{
  b_emxInitStruct_robotics_manip_in(&pStruct->Base);
  emxInitMatrix_robotics_manip_in(pStruct->_pobj0);
}

static void b_emxInitStruct_robotics_manip_in(robotics_manip_internal_RigidBody *
  pStruct)
{
  emxInit_char_T(&pStruct->NameInternal, 2);
  emxInitStruct_rigidBodyJoint(&pStruct->JointInternal);
  c_emxInitStruct_robotics_manip_in(&pStruct->CollisionsInternal);
}

static void emxInit_char_T(emxArray_char_T **pEmxArray, int32_T numDimensions)
{
  emxArray_char_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_char_T *)emlrtMallocMex(sizeof(emxArray_char_T));
  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInitStruct_rigidBodyJoint(rigidBodyJoint *pStruct)
{
  emxInit_char_T(&pStruct->Type, 2);
}

static void c_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct)
{
  emxInit_robotics_manip_internal(&pStruct->CollisionGeometries, 2);
}

static void emxInit_robotics_manip_internal(emxArray_robotics_manip_interna
  **pEmxArray, int32_T numDimensions)
{
  emxArray_robotics_manip_interna *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_robotics_manip_interna *)emlrtMallocMex(sizeof
    (emxArray_robotics_manip_interna));
  emxArray = *pEmxArray;
  emxArray->data = (robotics_manip_internal_CollisionGeometry *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInitMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[16])
{
  int32_T i;
  for (i = 0; i < 16; i++) {
    b_emxInitStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void emxFree_char_T(emxArray_char_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T *)NULL) {
    if (((*pEmxArray)->data != (char_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_char_T *)NULL;
  }
}

static void emxFreeStruct_robotics_manip_in(robotics_manip_internal_RigidBody
  *pStruct)
{
  emxFree_char_T(&pStruct->NameInternal);
  emxFreeStruct_rigidBodyJoint(&pStruct->JointInternal);
  b_emxFreeStruct_robotics_manip_in(&pStruct->CollisionsInternal);
}

static void emxFreeStruct_rigidBodyJoint(rigidBodyJoint *pStruct)
{
  emxFree_char_T(&pStruct->Type);
}

static void emxFree_robotics_manip_internal(emxArray_robotics_manip_interna
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_robotics_manip_interna *)NULL) {
    if (((*pEmxArray)->data != (robotics_manip_internal_CollisionGeometry *)NULL)
        && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_robotics_manip_interna *)NULL;
  }
}

static void b_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct)
{
  emxFree_robotics_manip_internal(&pStruct->CollisionGeometries);
}

static void c_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct)
{
  emxFreeStruct_robotics_manip_in(&pStruct->Base);
  emxFreeMatrix_robotics_manip_in(pStruct->_pobj0);
}

static void emxFreeMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[16])
{
  int32_T i;
  for (i = 0; i < 16; i++) {
    emxFreeStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void emxFreeStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_GetTransformBlock *pStruct)
{
  c_emxFreeStruct_robotics_manip_in(&pStruct->TreeInternal);
}

static void emxEnsureCapacity_char_T(emxArray_char_T *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtMallocMex((uint32_T)i * sizeof(char_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(char_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (char_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_robotics_mani(emxArray_robotics_manip_interna
  *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtMallocMex((uint32_T)i * sizeof
      (robotics_manip_internal_CollisionGeometry));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof
             (robotics_manip_internal_CollisionGeometry) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (robotics_manip_internal_CollisionGeometry *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxInit_cell_wrap(emxArray_cell_wrap **pEmxArray, int32_T
  numDimensions)
{
  emxArray_cell_wrap *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_cell_wrap *)emlrtMallocMex(sizeof(emxArray_cell_wrap));
  emxArray = *pEmxArray;
  emxArray->data = (cell_wrap *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxFree_cell_wrap(emxArray_cell_wrap **pEmxArray)
{
  if (*pEmxArray != (emxArray_cell_wrap *)NULL) {
    if (((*pEmxArray)->data != (cell_wrap *)NULL) && (*pEmxArray)->canFreeData)
    {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_cell_wrap *)NULL;
  }
}

static void emxEnsureCapacity_cell_wrap(emxArray_cell_wrap *emxArray, int32_T
  oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtMallocMex((uint32_T)i * sizeof(cell_wrap));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(cell_wrap) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (cell_wrap *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void init_simulink_io_address(InstanceStruct_79W5648Ed9sN1fJCl9QFBC
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->u0 = (real_T (*)[6])cgxertGetInputPortSignal(moduleInstance->S,
    0);
  moduleInstance->b_y0 = (real_T (*)[16])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
}

/* CGXE Glue Code */
static void mdlOutputs_79W5648Ed9sN1fJCl9QFBC(SimStruct *S, int_T tid)
{
  InstanceStruct_79W5648Ed9sN1fJCl9QFBC *moduleInstance =
    (InstanceStruct_79W5648Ed9sN1fJCl9QFBC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_79W5648Ed9sN1fJCl9QFBC(SimStruct *S)
{
  InstanceStruct_79W5648Ed9sN1fJCl9QFBC *moduleInstance =
    (InstanceStruct_79W5648Ed9sN1fJCl9QFBC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_79W5648Ed9sN1fJCl9QFBC(SimStruct *S, int_T tid)
{
  InstanceStruct_79W5648Ed9sN1fJCl9QFBC *moduleInstance =
    (InstanceStruct_79W5648Ed9sN1fJCl9QFBC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static void mdlDerivatives_79W5648Ed9sN1fJCl9QFBC(SimStruct *S)
{
  InstanceStruct_79W5648Ed9sN1fJCl9QFBC *moduleInstance =
    (InstanceStruct_79W5648Ed9sN1fJCl9QFBC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_derivative(moduleInstance);
}

static void mdlTerminate_79W5648Ed9sN1fJCl9QFBC(SimStruct *S)
{
  InstanceStruct_79W5648Ed9sN1fJCl9QFBC *moduleInstance =
    (InstanceStruct_79W5648Ed9sN1fJCl9QFBC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_79W5648Ed9sN1fJCl9QFBC(SimStruct *S)
{
  InstanceStruct_79W5648Ed9sN1fJCl9QFBC *moduleInstance =
    (InstanceStruct_79W5648Ed9sN1fJCl9QFBC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_79W5648Ed9sN1fJCl9QFBC(SimStruct *S)
{
  InstanceStruct_79W5648Ed9sN1fJCl9QFBC *moduleInstance =
    (InstanceStruct_79W5648Ed9sN1fJCl9QFBC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_79W5648Ed9sN1fJCl9QFBC(SimStruct *S)
{
  InstanceStruct_79W5648Ed9sN1fJCl9QFBC *moduleInstance =
    (InstanceStruct_79W5648Ed9sN1fJCl9QFBC *)calloc(1, sizeof
    (InstanceStruct_79W5648Ed9sN1fJCl9QFBC));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_79W5648Ed9sN1fJCl9QFBC);
  ssSetmdlInitializeConditions(S, mdlInitialize_79W5648Ed9sN1fJCl9QFBC);
  ssSetmdlUpdate(S, mdlUpdate_79W5648Ed9sN1fJCl9QFBC);
  ssSetmdlDerivatives(S, mdlDerivatives_79W5648Ed9sN1fJCl9QFBC);
  ssSetmdlTerminate(S, mdlTerminate_79W5648Ed9sN1fJCl9QFBC);
  ssSetmdlEnable(S, mdlEnable_79W5648Ed9sN1fJCl9QFBC);
  ssSetmdlDisable(S, mdlDisable_79W5648Ed9sN1fJCl9QFBC);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_79W5648Ed9sN1fJCl9QFBC(SimStruct *S)
{
}

void method_dispatcher_79W5648Ed9sN1fJCl9QFBC(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_79W5648Ed9sN1fJCl9QFBC(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_79W5648Ed9sN1fJCl9QFBC(S);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: 79W5648Ed9sN1fJCl9QFBC.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_79W5648Ed9sN1fJCl9QFBC_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxArray * elem_11;
  mxArray * elem_12;
  mxArray * elem_13;
  mxArray * elem_14;
  mxArray * elem_15;
  mxArray * elem_16;
  mxArray * elem_17;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(1,4);
  elem_4 = mxCreateString("addIncludeFiles");
  mxSetCell(elem_3,0,elem_4);
  elem_5 = mxCreateCellMatrix(1,1);
  elem_6 = mxCreateString("collisioncodegen_api.hpp");
  mxSetCell(elem_5,0,elem_6);
  mxSetCell(elem_3,1,elem_5);
  elem_7 = mxCreateCellMatrix(1,1);
  elem_8 = mxCreateString("");
  mxSetCell(elem_7,0,elem_8);
  mxSetCell(elem_3,2,elem_7);
  elem_9 = mxCreateCellMatrix(1,1);
  elem_10 = mxCreateString("");
  mxSetCell(elem_9,0,elem_10);
  mxSetCell(elem_3,3,elem_9);
  mxSetCell(elem_1,1,elem_3);
  elem_11 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_11);
  elem_12 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_12);
  elem_13 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_13);
  elem_14 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_14);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_15 = mxCreateCellMatrix(1,1);
  elem_16 = mxCreateString(
    "robotics.core.internal.coder.CollisionGeometryBuildable");
  mxSetCell(elem_15,0,elem_16);
  mxSetCell(mxBIArgs,1,elem_15);
  elem_17 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_17);
  return mxBIArgs;
}

mxArray *cgxe_79W5648Ed9sN1fJCl9QFBC_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString(
    "robotics.core.internal.coder.CollisionGeometryBuildable");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
