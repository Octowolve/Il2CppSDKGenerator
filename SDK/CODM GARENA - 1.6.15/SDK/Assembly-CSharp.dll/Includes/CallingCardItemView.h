#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CallingCardItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CallingCardItemView"));
	}

	template <typename T = uintptr_t> T& cardTemplate() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& selectFrame() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& quality() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& cardName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& equip() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& NewTag() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& RedTag() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int64_t> T& _cardID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCardID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEquipID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetColorID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRedTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRedDotState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T SetName(Il2CppString* showName) {
		return ((T (*)(CallingCardItemView*, Il2CppString*))(Il2CppBase() + 0x53151B8))(this, showName);
	}
	template <typename T = void> T SetSelect(bool isSelect) {
		return ((T (*)(CallingCardItemView*, bool))(Il2CppBase() + 0x53152D8))(this, isSelect);
	}
	template <typename T = void> T SetCardID(int64_t cardID) {
		return ((T (*)(CallingCardItemView*, int64_t))(Il2CppBase() + 0x53155A8))(this, cardID);
	}
	template <typename T = void> T SetEquipID(int64_t cardID) {
		return ((T (*)(CallingCardItemView*, int64_t))(Il2CppBase() + 0x5315938))(this, cardID);
	}
	template <typename T = void> T SetColorID(int32_t colorID) {
		return ((T (*)(CallingCardItemView*, int32_t))(Il2CppBase() + 0x5315A98))(this, colorID);
	}
	template <typename T = void> T SetRedTag(bool isSelect) {
		return ((T (*)(CallingCardItemView*, bool))(Il2CppBase() + 0x5315404))(this, isSelect);
	}
	template <typename T = void> T SetRedDotState(uintptr_t state) {
		return ((T (*)(CallingCardItemView*, uintptr_t))(Il2CppBase() + 0x5315BA0))(this, state);
	}

};

}
