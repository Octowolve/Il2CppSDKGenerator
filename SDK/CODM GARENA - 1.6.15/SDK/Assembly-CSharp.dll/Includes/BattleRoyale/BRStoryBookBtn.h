#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRStoryBookBtn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRStoryBookBtn"));
	}

	template <typename T = uintptr_t> T& ShowRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& UseBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& m_ImgIdx() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& m_TitleID() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& m_ContentID() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShowState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRootActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoCheckRootActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRStoryBookBtn*))(Il2CppBase() + 0x260E10C))(this);
	}
	template <typename T = uintptr_t> T get_StoryBookHUD() {
		return ((T (*)(BRStoryBookBtn*))(Il2CppBase() + 0x260E114))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BRStoryBookBtn*))(Il2CppBase() + 0x260E160))(this);
	}
	template <typename T = void> T SetShowState(bool isShow, int32_t imgIdx, Il2CppString* titleID, Il2CppString* contentID) {
		return ((T (*)(BRStoryBookBtn*, bool, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x260E300))(this, isShow, imgIdx, titleID, contentID);
	}
	template <typename T = void> T CheckRootActive() {
		return ((T (*)(BRStoryBookBtn*))(Il2CppBase() + 0x260E3F0))(this);
	}
	template <typename T = bool> T DoCheckRootActive() {
		return ((T (*)(BRStoryBookBtn*))(Il2CppBase() + 0x260E540))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BRStoryBookBtn*))(Il2CppBase() + 0x260E6DC))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRStoryBookBtn*, float))(Il2CppBase() + 0x260E780))(this, dt);
	}
	template <typename T = void> T OnUseBtnClick() {
		return ((T (*)(BRStoryBookBtn*))(Il2CppBase() + 0x260E82C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BRStoryBookBtn*))(Il2CppBase() + 0x260EB14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BRStoryBookBtn*))(Il2CppBase() + 0x260EB1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRStoryBookBtn*, float))(Il2CppBase() + 0x260EB24))(this, P0);
	}

};

}
