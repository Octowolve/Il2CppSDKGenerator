#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class InGameMessageController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "InGameMessageController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(InGameMessageController*))(Il2CppBase() + 0x1F09C40))(this);
	}
	template <typename T = void> T ShowMessage(uintptr_t pos, Il2CppString* message, int32_t duration) {
		return ((T (*)(InGameMessageController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1E9E530))(this, pos, message, duration);
	}
	template <typename T = void> T ShowCountDown(int32_t count, Il2CppString* message, bool playSound) {
		return ((T (*)(InGameMessageController*, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x1E9E9F8))(this, count, message, playSound);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(InGameMessageController*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1F0A254))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(InGameMessageController*, uintptr_t))(Il2CppBase() + 0x1F0A5AC))(this, itemType);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(InGameMessageController*))(Il2CppBase() + 0x1F0A654))(this);
	}

};

}
