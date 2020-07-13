#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVS {

class PVSBuilderBR
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVS", "PVSBuilder_BR"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetObjForPVS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixCombineAndSplitVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T GetObjForPVS(uintptr_t go) {
		return ((T (*)(PVSBuilderBR*, uintptr_t))(Il2CppBase() + 0x3DA5754))(this, go);
	}
	template <typename T = void> T FixCombineAndSplitVisible(uintptr_t viewCell) {
		return ((T (*)(PVSBuilderBR*, uintptr_t))(Il2CppBase() + 0x3DA590C))(this, viewCell);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetObjForPVS(uintptr_t P0) {
		return ((T (*)(PVSBuilderBR*, uintptr_t))(Il2CppBase() + 0x3DA5F10))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_FixCombineAndSplitVisible(uintptr_t P0) {
		return ((T (*)(PVSBuilderBR*, uintptr_t))(Il2CppBase() + 0x3DA5F14))(this, P0);
	}

};

}
