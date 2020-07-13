#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class SignDayItemRewardItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "SignDayItemRewardItemView"));
	}

	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& Desc() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& TimeLabel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& ObjTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& m_Dayindex() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppQuaternion> T& WEAPON_ROTATION() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppQuaternion> T& THROW_WEAPON_ROTATION() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ItemIconCheckRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetContent(int32_t itemId, int32_t count, int32_t duration, int32_t dayIndex) {
		return ((T (*)(SignDayItemRewardItemView*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x385DD94))(this, itemId, count, duration, dayIndex);
	}
	template <typename T = void> T ItemIconCheckRotation(int32_t id, uintptr_t icon) {
		return ((T (*)(SignDayItemRewardItemView*, int32_t, uintptr_t))(Il2CppBase() + 0x385E468))(this, id, icon);
	}

};

}
