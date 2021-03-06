// Copyright 2017 Benjamin Glatzel
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

namespace Intrinsic
{
namespace AssetManagement
{
namespace Importers
{
struct Fbx
{
  static void init();
  static void destroy();

  static bool importMeshesFromFile(const _INTR_STRING& p_FilePath,
                                   _INTR_ARRAY(CResources::MeshRef) &
                                       p_ImportedMeshes);
};
}
}
}