#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BpNewSeasonVideoView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BpNewSeasonVideoView"));
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
	template <typename T = uintptr_t> T& ContinueBtn_1() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& ContinueBtn_2() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ContinueBtn_3() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& ContinueBtn_4() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& LogoSpriteObj_1() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& LogoSpriteObj_2() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& LogoSpriteObj_3() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& LogoSpriteObj_4() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& LogoSprite_1_Season() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& LogoSprite_1_Time() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& LogoSprite_2_SeasonAndHeroName() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLogoSpriteData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitVideo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAlphaTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLogoSpritesStates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BpNewSeasonVideoView*))(Il2CppBase() + 0x2C47A90))(this);
	}
	template <typename T = void> T SetLogoSpriteData(uintptr_t timeLimitDesc) {
		return ((T (*)(BpNewSeasonVideoView*, uintptr_t))(Il2CppBase() + 0x2C4606C))(this, timeLimitDesc);
	}
	template <typename T = Il2CppString*> T GetTime(int32_t BeginTime, int32_t EndTime) {
		return ((T (*)(BpNewSeasonVideoView*, int32_t, int32_t))(Il2CppBase() + 0x2C47B38))(this, BeginTime, EndTime);
	}
	template <typename T = void> T InitVideo() {
		return ((T (*)(BpNewSeasonVideoView*))(Il2CppBase() + 0x2C478AC))(this);
	}
	template <typename T = uintptr_t> T Play() {
		return ((T (*)(BpNewSeasonVideoView*))(Il2CppBase() + 0x2C47D64))(this);
	}
	template <typename T = void> T FinishShow() {
		return ((T (*)(BpNewSeasonVideoView*))(Il2CppBase() + 0x2C47354))(this);
	}
	template <typename T = void> T PlayAlphaTween(uintptr_t obj, bool IsForward, bool isEnabled, float mduration, float mdalay) {
		return ((T (*)(BpNewSeasonVideoView*, uintptr_t, bool, bool, float, float))(Il2CppBase() + 0x2C46B1C))(this, obj, IsForward, isEnabled, mduration, mdalay);
	}
	template <typename T = void> T SetLogoSpritesStates() {
		return ((T (*)(BpNewSeasonVideoView*))(Il2CppBase() + 0x2C47798))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BpNewSeasonVideoView*))(Il2CppBase() + 0x2C47E4C))(this);
	}

};

}
