#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ChestViewMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ChestViewMode"));
	}

	template <typename T = bool> T& mProcessing() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& Error() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mBoxes() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& OpenedBoxNumber() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& CardsTurn2Mail() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mOpeningCards() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& debug() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_End() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CardsParse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Debug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Start(Il2CppList<uintptr_t>* boxes) {
		return ((T (*)(ChestViewMode*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x28C83B0))(this, boxes);
	}
	template <typename T = void> T End() {
		return ((T (*)(ChestViewMode*))(Il2CppBase() + 0x28C71C0))(this);
	}
	template <typename T = bool> T get_Processing() {
		return ((T (*)(ChestViewMode*))(Il2CppBase() + 0x28C84B8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_Boxes() {
		return ((T (*)(ChestViewMode*))(Il2CppBase() + 0x28C3D4C))(this);
	}
	template <typename T = void> T set_OpenedBoxNumber(int32_t value) {
		return ((T (*)(ChestViewMode*, int32_t))(Il2CppBase() + 0x28C84A8))(this, value);
	}
	template <typename T = int32_t> T get_OpenedBoxNumber() {
		return ((T (*)(ChestViewMode*))(Il2CppBase() + 0x28C3D54))(this);
	}
	template <typename T = void> T set_CardsTurn2Mail(bool value) {
		return ((T (*)(ChestViewMode*, bool))(Il2CppBase() + 0x28C84B0))(this, value);
	}
	template <typename T = bool> T get_CardsTurn2Mail() {
		return ((T (*)(ChestViewMode*))(Il2CppBase() + 0x28C3E64))(this);
	}
	template <typename T = void> T CardsParse(uintptr_t boxData) {
		return ((T (*)(ChestViewMode*, uintptr_t))(Il2CppBase() + 0x28C84C0))(this, boxData);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OpeningCards() {
		return ((T (*)(ChestViewMode*))(Il2CppBase() + 0x28C3E6C))(this);
	}
	template <typename T = bool> T Debug() {
		return ((T (*)(ChestViewMode*))(Il2CppBase() + 0x28C8B3C))(this);
	}

};

}
