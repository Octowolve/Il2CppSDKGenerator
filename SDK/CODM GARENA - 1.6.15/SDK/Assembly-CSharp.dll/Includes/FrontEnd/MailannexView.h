#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class MailannexView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "MailannexView"));
	}

	template <typename T = uintptr_t> T& RotateTransform() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& QualitySprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ItemSprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& NumberLabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& TagChecked() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& time_obj() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& time_Lable() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& ChipFlagObj() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& TimeOutObj() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChecked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetItem(int32_t itemId, int32_t num, int32_t m_DurationTime, bool isWeasponExpire, bool IsReceive) {
		return ((T (*)(MailannexView*, int32_t, int32_t, int32_t, bool, bool))(Il2CppBase() + 0x36B6294))(this, itemId, num, m_DurationTime, isWeasponExpire, IsReceive);
	}
	template <typename T = void> T SetChecked(bool bCheck) {
		return ((T (*)(MailannexView*, bool))(Il2CppBase() + 0x36B6B54))(this, bCheck);
	}
	template <typename T = void> T SetChip(int32_t itemId, int32_t num) {
		return ((T (*)(MailannexView*, int32_t, int32_t))(Il2CppBase() + 0x36B6C48))(this, itemId, num);
	}

};

}
