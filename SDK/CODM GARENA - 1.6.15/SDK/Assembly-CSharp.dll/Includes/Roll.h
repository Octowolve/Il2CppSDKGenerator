#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Roll
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Roll"));
	}

	template <typename T = bool> T& ASide() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& A() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& B() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x14);
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
	template <typename T = uintptr_t> static T& __Hotfix0_Head() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Move() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Empty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Append() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindUsingCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(Roll*))(Il2CppBase() + 0x3AE26E4))(this);
	}
	template <typename T = void> T End() {
		return ((T (*)(Roll*))(Il2CppBase() + 0x3AE2B54))(this);
	}
	template <typename T = uintptr_t> T Head() {
		return ((T (*)(Roll*))(Il2CppBase() + 0x3AE2788))(this);
	}
	template <typename T = void> T Move() {
		return ((T (*)(Roll*))(Il2CppBase() + 0x3AE288C))(this);
	}
	template <typename T = bool> T Empty() {
		return ((T (*)(Roll*))(Il2CppBase() + 0x3AE2934))(this);
	}
	template <typename T = void> T Append(uintptr_t cell) {
		return ((T (*)(Roll*, uintptr_t))(Il2CppBase() + 0x3AE2A48))(this, cell);
	}
	template <typename T = uintptr_t> T FindUsingCell(uintptr_t path) {
		return ((T (*)(Roll*, uintptr_t))(Il2CppBase() + 0x3AE2C60))(this, path);
	}

};

}
