#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SceneHeightMapScriptObj
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SceneHeightMapScriptObj"));
	}

	template <typename T = float> T& UnitLen() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& XoffsetAddL2W() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& ZoffsetAddL2W() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Xsize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Zsize() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HeightMap() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProduceHeightMapToTmpBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ProduceHeightMapToTmpBuffer() {
		return ((T (*)(SceneHeightMapScriptObj*))(Il2CppBase() + 0x33E921C))(this);
	}

};

}
