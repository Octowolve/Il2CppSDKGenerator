#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BpSeasonVideoView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BpSeasonVideoView"));
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
	template <typename T = Il2CppString*> T& BpSeasonVideoName() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& SkipButton() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ContinueBtn() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LogoSpriteObj() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SeasonIntroduceBg() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& SeasonIntroduceLabelSample() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SeasonSpecialGo() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SeasonIntroduceLabelRoot() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitVideo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShoutDownVodeo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAlphaTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLogoSpritesStates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BpSeasonVideoView*))(Il2CppBase() + 0x2C4E750))(this);
	}
	template <typename T = void> T InitVideo() {
		return ((T (*)(BpSeasonVideoView*))(Il2CppBase() + 0x2C4E294))(this);
	}
	template <typename T = uintptr_t> T Play() {
		return ((T (*)(BpSeasonVideoView*))(Il2CppBase() + 0x2C4E7F8))(this);
	}
	template <typename T = void> T FinishShow() {
		return ((T (*)(BpSeasonVideoView*))(Il2CppBase() + 0x2C4DEB4))(this);
	}
	template <typename T = void> T ShoutDownVodeo() {
		return ((T (*)(BpSeasonVideoView*))(Il2CppBase() + 0x2C4E40C))(this);
	}
	template <typename T = void> T PlayAlphaTween(uintptr_t obj, bool IsForward, bool isEnabled, float mduration, float mdalay) {
		return ((T (*)(BpSeasonVideoView*, uintptr_t, bool, bool, float, float))(Il2CppBase() + 0x2C4D9F0))(this, obj, IsForward, isEnabled, mduration, mdalay);
	}
	template <typename T = void> T SetLogoSpritesStates() {
		return ((T (*)(BpSeasonVideoView*))(Il2CppBase() + 0x2C4E15C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BpSeasonVideoView*))(Il2CppBase() + 0x2C4E8E0))(this);
	}

};

}
