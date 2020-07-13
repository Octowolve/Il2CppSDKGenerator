#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LuckyDrawVideoView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LuckyDrawVideoView"));
	}

	template <typename T = uintptr_t> T& MainMediaPlayer() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& MediaTexture() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& MediaPlayerAdapter() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& SkipButton() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& ContinueBtn() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& LogoSpriteObj() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& LogoSprite() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& LuckyDrawVideoName() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppString*> T& LuckyDrawVideoBGName() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uint32_t> T& luckyDrawGoodId() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitVideo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGoodId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAlphaTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendLuckBoxQueryGroupProbReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T InitVideo(Il2CppString* videoName, Il2CppString* videoBGName) {
		return ((T (*)(LuckyDrawVideoView*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1F93970))(this, videoName, videoBGName);
	}
	template <typename T = void> T SetGoodId(uint32_t luckyDrawGoodId) {
		return ((T (*)(LuckyDrawVideoView*, uint32_t))(Il2CppBase() + 0x1F93788))(this, luckyDrawGoodId);
	}
	template <typename T = uintptr_t> T Play() {
		return ((T (*)(LuckyDrawVideoView*))(Il2CppBase() + 0x1F93BFC))(this);
	}
	template <typename T = void> T PlayAlphaTween(uintptr_t obj, bool IsForward, bool isEnabled, float mduration, float mdalay) {
		return ((T (*)(LuckyDrawVideoView*, uintptr_t, bool, bool, float, float))(Il2CppBase() + 0x1F93CE4))(this, obj, IsForward, isEnabled, mduration, mdalay);
	}
	template <typename T = void> T FinishShow() {
		return ((T (*)(LuckyDrawVideoView*))(Il2CppBase() + 0x1F8BF90))(this);
	}
	template <typename T = void> T SendLuckBoxQueryGroupProbReq(uint32_t boxId, uintptr_t source) {
		return ((T (*)(LuckyDrawVideoView*, uint32_t, uintptr_t))(Il2CppBase() + 0x1F93F70))(this, boxId, source);
	}

};

}
