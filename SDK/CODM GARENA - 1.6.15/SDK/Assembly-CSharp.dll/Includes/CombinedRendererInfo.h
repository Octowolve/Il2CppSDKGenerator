#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CombinedRendererInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CombinedRendererInfo"));
	}

	template <typename T = uintptr_t> T& Renderer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<int32_t>*> T& GlobalMatIndexes() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<unsigned char>*> T& SubMeshMatIndexes() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<unsigned char>*> T& SubMeshMatIndexesBackup() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<int32_t>*> T& GlobalMatIndexesBackup() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& PartNames() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<int32_t>*> T& PartAssetIDs() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& LodIndex() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
