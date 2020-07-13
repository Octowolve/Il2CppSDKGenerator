#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ScrollTemplateAData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ScrollTemplateAData"));
	}

	template <typename T = int32_t> T& m_SeqId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_LevelNum() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_ItemId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_ItemId2() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_LevelExpNeed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_DisplayIcon() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& m_FixIcon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_ColorId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_Important() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_LevelExpCur() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_LevelAddExpCur() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_LevelAddExpNext() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& m_LevelIcon() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_Last() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_First() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = bool> T& m_NextLevelLast() {
		return *(T*)((uintptr_t)this + 0x3E);
	}
	template <typename T = int32_t> T& m_NextLevelExpNeed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_NextLevelExpCur() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_ReddotState() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& SelectItemIdx() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_Select() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_GetNumber() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& items() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix3_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix4_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ManipulateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ManipulateAddExp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = int32_t> T get_SeqId() {
		return ((T (*)(ScrollTemplateAData*))(Il2CppBase() + 0x447DACC))(this);
	}
	template <typename T = int32_t> T get_LevelNum() {
		return ((T (*)(ScrollTemplateAData*))(Il2CppBase() + 0x447C124))(this);
	}
	template <typename T = int32_t> T get_ItemId() {
		return ((T (*)(ScrollTemplateAData*))(Il2CppBase() + 0x4482554))(this);
	}
	template <typename T = int32_t> T get_ItemId2() {
		return ((T (*)(ScrollTemplateAData*))(Il2CppBase() + 0x448255C))(this);
	}
	template <typename T = int32_t> T get_LevelExpNeed() {
		return ((T (*)(ScrollTemplateAData*))(Il2CppBase() + 0x447C12C))(this);
	}
	template <typename T = bool> T get_DisplayIcon() {
		return ((T (*)(ScrollTemplateAData*))(Il2CppBase() + 0x4482564))(this);
	}
	template <typename T = Il2CppString*> T get_FixIcon() {
		return ((T (*)(ScrollTemplateAData*))(Il2CppBase() + 0x448256C))(this);
	}
	template <typename T = int32_t> T get_ColorId() {
		return ((T (*)(ScrollTemplateAData*))(Il2CppBase() + 0x4482574))(this);
	}
	template <typename T = bool> T get_Important() {
		return ((T (*)(ScrollTemplateAData*))(Il2CppBase() + 0x447DFA0))(this);
	}
	template <typename T = int32_t> T get_LevelExpCur() {
		return ((T (*)(ScrollTemplateAData*))(Il2CppBase() + 0x448257C))(this);
	}
	template <typename T = int32_t> T get_LevelAddExpCur() {
		return ((T (*)(ScrollTemplateAData*))(Il2CppBase() + 0x4482584))(this);
	}
	template <typename T = int32_t> T get_LevelAddExpNext() {
		return ((T (*)(ScrollTemplateAData*))(Il2CppBase() + 0x448258C))(this);
	}
	template <typename T = Il2CppString*> T get_LevelIcon() {
		return ((T (*)(ScrollTemplateAData*))(Il2CppBase() + 0x4482594))(this);
	}
	template <typename T = bool> T get_Last() {
		return ((T (*)(ScrollTemplateAData*))(Il2CppBase() + 0x448259C))(this);
	}
	template <typename T = bool> T get_First() {
		return ((T (*)(ScrollTemplateAData*))(Il2CppBase() + 0x44825A4))(this);
	}
	template <typename T = bool> T get_NextLevelLast() {
		return ((T (*)(ScrollTemplateAData*))(Il2CppBase() + 0x44825AC))(this);
	}
	template <typename T = int32_t> T get_NextLevelExpNeed() {
		return ((T (*)(ScrollTemplateAData*))(Il2CppBase() + 0x44825B4))(this);
	}
	template <typename T = int32_t> T get_NextLevelExpCur() {
		return ((T (*)(ScrollTemplateAData*))(Il2CppBase() + 0x44825BC))(this);
	}
	template <typename T = uintptr_t> T get_ReddotState() {
		return ((T (*)(ScrollTemplateAData*))(Il2CppBase() + 0x44825C4))(this);
	}
	template <typename T = void> T set_ReddotState(uintptr_t value) {
		return ((T (*)(ScrollTemplateAData*, uintptr_t))(Il2CppBase() + 0x447DA18))(this, value);
	}
	template <typename T = bool> T get_Select() {
		return ((T (*)(ScrollTemplateAData*))(Il2CppBase() + 0x44825CC))(this);
	}
	template <typename T = void> T set_Select(bool value) {
		return ((T (*)(ScrollTemplateAData*, bool))(Il2CppBase() + 0x447B72C))(this, value);
	}
	template <typename T = int32_t> T get_GetNumber() {
		return ((T (*)(ScrollTemplateAData*))(Il2CppBase() + 0x44825D4))(this);
	}
	template <typename T = void> T ManipulateData(int32_t startLevel, int32_t endLevel, int32_t totalExp, int32_t nextLevelExpNeed, bool select) {
		return ((T (*)(ScrollTemplateAData*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x447C134))(this, startLevel, endLevel, totalExp, nextLevelExpNeed, select);
	}
	template <typename T = int32_t> T ManipulateAddExp(int32_t addExp) {
		return ((T (*)(ScrollTemplateAData*, int32_t))(Il2CppBase() + 0x447C4EC))(this, addExp);
	}

};

}
