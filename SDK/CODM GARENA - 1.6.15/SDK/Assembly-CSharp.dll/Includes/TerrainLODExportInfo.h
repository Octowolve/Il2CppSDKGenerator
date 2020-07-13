#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TerrainLODExportInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TerrainLODExportInfo"));
	}

	template <typename T = float> T& trianglePercent() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& processVertexLock() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& preserveBorders() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = float> T& lodDistance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& debugColor() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& material() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
