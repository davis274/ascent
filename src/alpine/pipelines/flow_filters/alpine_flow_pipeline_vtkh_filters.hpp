//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
// Copyright (c) 2015-2017, Lawrence Livermore National Security, LLC.
// 
// Produced at the Lawrence Livermore National Laboratory
// 
// LLNL-CODE-716457
// 
// All rights reserved.
// 
// This file is part of Alpine. 
// 
// For details, see: http://software.llnl.gov/alpine/.
// 
// Please also read alpine/LICENSE
// 
// Redistribution and use in source and binary forms, with or without 
// modification, are permitted provided that the following conditions are met:
// 
// * Redistributions of source code must retain the above copyright notice, 
//   this list of conditions and the disclaimer below.
// 
// * Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the disclaimer (as noted below) in the
//   documentation and/or other materials provided with the distribution.
// 
// * Neither the name of the LLNS/LLNL nor the names of its contributors may
//   be used to endorse or promote products derived from this software without
//   specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL LAWRENCE LIVERMORE NATIONAL SECURITY,
// LLC, THE U.S. DEPARTMENT OF ENERGY OR CONTRIBUTORS BE LIABLE FOR ANY
// DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL 
// DAMAGES  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
// OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
// HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, 
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
// IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
// POSSIBILITY OF SUCH DAMAGE.
// 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//


//-----------------------------------------------------------------------------
///
/// file: alpine_flow_pipeline_vtkh_filters.hpp
///
//-----------------------------------------------------------------------------

#ifndef ALPINE_FLOW_PIPELINE_VTKH_FILTERS
#define ALPINE_FLOW_PIPELINE_VTKH_FILTERS

#include <alpine.hpp>
#include <alpine_flow.hpp>

#include <alpine_flow_filter.hpp>


//-----------------------------------------------------------------------------
// -- begin alpine:: --
//-----------------------------------------------------------------------------
namespace alpine
{

//-----------------------------------------------------------------------------
// -- begin alpine::pipeline --
//-----------------------------------------------------------------------------
namespace pipeline
{

//-----------------------------------------------------------------------------
// -- begin alpine::pipeline::flow --
//-----------------------------------------------------------------------------
namespace flow
{

//-----------------------------------------------------------------------------
// -- begin alpine::pipeline::flow::filters --
//-----------------------------------------------------------------------------
namespace filters
{

//-----------------------------------------------------------------------------
///
/// VTK-H Filters
///
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
class EnsureVTKH : public alpine::flow::Filter
{
public:
    EnsureVTKH();
   ~EnsureVTKH();
    
    virtual void   declare_interface(conduit::Node &i);
    virtual void   execute();
};

//-----------------------------------------------------------------------------
class VTKHRayTracer : public alpine::flow::Filter
{
public:
    VTKHRayTracer();
   ~VTKHRayTracer();
    
    virtual void   declare_interface(conduit::Node &i);
    virtual bool   verify_params(const conduit::Node &params,
                                 conduit::Node &info);
    virtual void   execute();
};

//-----------------------------------------------------------------------------
class VTKHMarchingCubes : public alpine::flow::Filter
{
public:
    VTKHMarchingCubes();
   ~VTKHMarchingCubes();
    
    virtual void   declare_interface(conduit::Node &i);
    virtual bool   verify_params(const conduit::Node &params,
                                 conduit::Node &info);
    virtual void   execute();
};




};
//-----------------------------------------------------------------------------
// -- end alpine::pipeline::flow::filters --
//-----------------------------------------------------------------------------


//-----------------------------------------------------------------------------
};
//-----------------------------------------------------------------------------
// -- end alpine::pipeline::flow --
//-----------------------------------------------------------------------------



//-----------------------------------------------------------------------------
};
//-----------------------------------------------------------------------------
// -- end alpine::pipeline --
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
};
//-----------------------------------------------------------------------------
// -- end alpine:: --
//-----------------------------------------------------------------------------




#endif
//-----------------------------------------------------------------------------
// -- end header ifdef guard
//-----------------------------------------------------------------------------