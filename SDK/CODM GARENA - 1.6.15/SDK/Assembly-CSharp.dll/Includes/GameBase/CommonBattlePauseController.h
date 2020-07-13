#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CommonBattlePauseController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CommonBattlePauseController"));
	}

	template <typename T = uintptr_t> T& m_BattlePauseView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfShutdownWhenClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfBlurWhenOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Close() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnLobby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMode_OnlyResume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = bool> T IfShutdownWhenClose() {
		return ((T (*)(CommonBattlePauseController*))(Il2CppBase() + 0x3C7EA7C))(this);
	}
	template <typename T = bool> T IfBlurWhenOpen() {
		return ((T (*)(CommonBattlePauseController*))(Il2CppBase() + 0x3C7EB1C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CommonBattlePauseController*))(Il2CppBase() + 0x3C7EBBC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CommonBattlePauseController*))(Il2CppBase() + 0x3C7EC60))(this);
	}
	template <typename T = void> T Close(uintptr_t closeType) {
		return ((T (*)(CommonBattlePauseController*, uintptr_t))(Il2CppBase() + 0x3C7EE68))(this, closeType);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CommonBattlePauseController*))(Il2CppBase() + 0x3C7F01C))(this);
	}
	template <typename T = void> T OnReturnLobby() {
		return ((T (*)(CommonBattlePauseController*))(Il2CppBase() + 0x3C7F130))(this);
	}
	template <typename T = void> T SetMode_OnlyResume() {
		return ((T (*)(CommonBattlePauseController*))(Il2CppBase() + 0x3C7F370))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfShutdownWhenClose() {
		return ((T (*)(CommonBattlePauseController*))(Il2CppBase() + 0x3C7F42C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfBlurWhenOpen() {
		return ((T (*)(CommonBattlePauseController*))(Il2CppBase() + 0x3C7F434))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CommonBattlePauseController*))(Il2CppBase() + 0x3C7F43C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CommonBattlePauseController*))(Il2CppBase() + 0x3C7F444))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Close(uintptr_t P0) {
		return ((T (*)(CommonBattlePauseController*, uintptr_t))(Il2CppBase() + 0x3C7F44C))(this, P0);
	}

};

}
