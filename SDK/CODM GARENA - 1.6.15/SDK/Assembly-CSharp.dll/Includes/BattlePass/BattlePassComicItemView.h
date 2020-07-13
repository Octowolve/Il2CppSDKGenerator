#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassComicItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassComicItemView"));
	}

	template <typename T = uintptr_t> T& Seq() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ShowComicBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LockObjList() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& UnlockTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& DownLoadFailed() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& Thumbnail() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& RedPoint() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& mStr_full_Cdn() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& isLock() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetComicItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetComicStates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetThumbnailInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTextureContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUnLockTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetThumbnailSeq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T SetComicItemData(uintptr_t comicData) {
		return ((T (*)(BattlePassComicItemView*, uintptr_t))(Il2CppBase() + 0x327CEA4))(this, comicData);
	}
	template <typename T = void> T SetComicStates(uintptr_t comicData) {
		return ((T (*)(BattlePassComicItemView*, uintptr_t))(Il2CppBase() + 0x327D278))(this, comicData);
	}
	template <typename T = void> T SetThumbnailInfo(uintptr_t ComicData) {
		return ((T (*)(BattlePassComicItemView*, uintptr_t))(Il2CppBase() + 0x327E47C))(this, ComicData);
	}
	template <typename T = void> T SetTextureContent(Il2CppString* url, bool isSuccess, uintptr_t texture) {
		return ((T (*)(BattlePassComicItemView*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x327ECDC))(this, url, isSuccess, texture);
	}
	template <typename T = void> T SetUnLockTime(int32_t timeDifference) {
		return ((T (*)(BattlePassComicItemView*, int32_t))(Il2CppBase() + 0x327DE58))(this, timeDifference);
	}
	template <typename T = void> T SetThumbnailSeq(uintptr_t battlePassComic) {
		return ((T (*)(BattlePassComicItemView*, uintptr_t))(Il2CppBase() + 0x327DCF0))(this, battlePassComic);
	}

};

}
