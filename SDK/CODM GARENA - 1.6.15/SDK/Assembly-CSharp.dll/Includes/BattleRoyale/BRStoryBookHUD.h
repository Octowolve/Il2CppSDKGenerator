#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRStoryBookHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRStoryBookHUD"));
	}

	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TitleLab() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ContentLab() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& StoryImg() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& StoryImgList() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& m_IsShowing() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& m_ImgIdx() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& m_TitleID() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& m_ContentID() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShowState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetImgTextrue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T get_IsShowing() {
		return ((T (*)(BRStoryBookHUD*))(Il2CppBase() + 0x260E6D4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BRStoryBookHUD*))(Il2CppBase() + 0x260EBD8))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BRStoryBookHUD*))(Il2CppBase() + 0x260ED78))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(BRStoryBookHUD*))(Il2CppBase() + 0x260EE28))(this);
	}
	template <typename T = void> T SetShowState(bool isShow, int32_t imgIdx, Il2CppString* titleID, Il2CppString* contentID) {
		return ((T (*)(BRStoryBookHUD*, bool, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x260EED8))(this, isShow, imgIdx, titleID, contentID);
	}
	template <typename T = void> T SetImgTextrue(int32_t idx) {
		return ((T (*)(BRStoryBookHUD*, int32_t))(Il2CppBase() + 0x260F128))(this, idx);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(BRStoryBookHUD*))(Il2CppBase() + 0x260F2C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BRStoryBookHUD*))(Il2CppBase() + 0x260F37C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BRStoryBookHUD*))(Il2CppBase() + 0x260F384))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(BRStoryBookHUD*))(Il2CppBase() + 0x260F38C))(this);
	}

};

}
