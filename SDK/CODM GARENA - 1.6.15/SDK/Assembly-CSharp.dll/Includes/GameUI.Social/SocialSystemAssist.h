#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Social {

class SocialSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Social", "SocialSystemAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendLikeRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLikeRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeLiked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRollNotice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T SendLikeRequest(uint64_t otherPlayerId, uint64_t matchGUID) {
		return ((T (*)(SocialSystemAssist*, uint64_t, uint64_t))(Il2CppBase() + 0x3CA10B8))(this, otherPlayerId, matchGUID);
	}
	template <typename T = void> T OnLikeRes(uintptr_t resp) {
		return ((T (*)(SocialSystemAssist*, uintptr_t))(Il2CppBase() + 0x3CA15C4))(this, resp);
	}
	template <typename T = void> T OnBeLiked(uintptr_t resp) {
		return ((T (*)(SocialSystemAssist*, uintptr_t))(Il2CppBase() + 0x3CA1968))(this, resp);
	}
	template <typename T = void> T SendRollNotice(Il2CppString* prompt) {
		return ((T (*)(SocialSystemAssist*, Il2CppString*))(Il2CppBase() + 0x3CA1DA8))(this, prompt);
	}

};

}
