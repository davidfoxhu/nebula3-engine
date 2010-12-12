//------------------------------------------------------------------------------
//  modelwriter.cc
//  (C) 2008 Radon Labs GmbH
//------------------------------------------------------------------------------
#include "stdneb.h"
#include "modelwriter.h"

namespace ToolkitUtil
{
__ImplementAbstractClass(ToolkitUtil::ModelWriter, 'MDLW', IO::StreamWriter);

//------------------------------------------------------------------------------
/**
*/
ModelWriter::ModelWriter() :
    platform(Platform::Win32),
    version(1)
{
    // empty
}

//------------------------------------------------------------------------------
/**
*/
ModelWriter::~ModelWriter()
{
    // empty
}

} // namespace ModelWriter