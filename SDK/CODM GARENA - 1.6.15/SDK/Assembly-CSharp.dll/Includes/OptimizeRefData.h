#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OptimizeRefData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OptimizeRefData"));
	}

	template <typename T = uintptr_t> T& ModelObj() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& MeshRootTran() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& NeedGPUSkin() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& LodIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& AssetIDStr() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsDestoryOriginalGameObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& IsGetSubMeshAssetID() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = bool> T& IsMeshToSkin() {
		return *(T*)((uintptr_t)this + 0x1E);
	}
	template <typename T = bool> T& IsCacheOptimizedMesh() {
		return *(T*)((uintptr_t)this + 0x1F);
	}
	template <typename T = uintptr_t> T& NewRendererObj() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& NewRenderer() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& OptimizedMesh() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& OptimizeBoneInfo() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& OptimizedModel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& CacheOptimizedMeshKey() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& TemplateRenderer() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& VaildRenderers() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CombineMeshDatas() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Materials() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<unsigned char>*> T& SubMeshMaterialIndexs() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& SubMeshNames() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<int32_t>*> T& SubMeshAssetIDs() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AllBones() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& AllBonesSize() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AllUniqueBones() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& AllUniqueBonesSize() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
