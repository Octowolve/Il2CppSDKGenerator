#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PriorityList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PriorityList"));
	}

	template <typename T = uintptr_t> static T& s_compareByPriority() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& rooms() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uint64_t> T GetHighestPriorityRoomID() {
		return ((T (*)(PriorityList*))(Il2CppBase() + 0x491E97C))(this);
	}
	template <typename T = uintptr_t> T GetHighestPriorityRoom() {
		return ((T (*)(PriorityList*))(Il2CppBase() + 0x491EAB8))(this);
	}
	template <typename T = void> T Add(uintptr_t room) {
		return ((T (*)(PriorityList*, uintptr_t))(Il2CppBase() + 0x491EC68))(this, room);
	}
	template <typename T = void> T Remove(uintptr_t room) {
		return ((T (*)(PriorityList*, uintptr_t))(Il2CppBase() + 0x491EE68))(this, room);
	}
	template <typename T = bool> T Contains(uintptr_t room) {
		return ((T (*)(PriorityList*, uintptr_t))(Il2CppBase() + 0x491EF08))(this, room);
	}
	template <typename T = int32_t> T BinarySearch(uintptr_t room) {
		return ((T (*)(PriorityList*, uintptr_t))(Il2CppBase() + 0x491ED24))(this, room);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(PriorityList*))(Il2CppBase() + 0x491EF28))(this);
	}

};

}
