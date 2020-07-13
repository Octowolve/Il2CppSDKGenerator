#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class VTOLCrossAssistanceController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "VTOLCrossAssistanceController"));
	}

	template <typename T = int32_t> static T& m_GreenAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPawnAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreLoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T CheckPawnAdd(uintptr_t aimPawn) {
		return ((T (*)(VTOLCrossAssistanceController*, uintptr_t))(Il2CppBase() + 0x2E929F0))(this, aimPawn);
	}
	template <typename T = int32_t> T GetAssetID(uint32_t playerID) {
		return ((T (*)(VTOLCrossAssistanceController*, uint32_t))(Il2CppBase() + 0x2E92BF4))(this, playerID);
	}
	template <typename T = void> T PreLoadAsset() {
		return ((T (*)(VTOLCrossAssistanceController*))(Il2CppBase() + 0x2E92D34))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckPawnAdd(uintptr_t P0) {
		return ((T (*)(VTOLCrossAssistanceController*, uintptr_t))(Il2CppBase() + 0x2E92E90))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetAssetID(uint32_t P0) {
		return ((T (*)(VTOLCrossAssistanceController*, uint32_t))(Il2CppBase() + 0x2E92E98))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PreLoadAsset() {
		return ((T (*)(VTOLCrossAssistanceController*))(Il2CppBase() + 0x2E92EA0))(this);
	}

};

}
