#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrivateImplementationDetails
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "", "<PrivateImplementationDetails>"));
	}

	template <typename T = uintptr_t> static T& $$field-0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& $$field-1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& $$field-2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& $$field-3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& $$field-4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	template <typename T = uintptr_t> static T& $$field-5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x700);
	}
	template <typename T = uintptr_t> static T& $$field-6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB00);
	}
	template <typename T = uintptr_t> static T& $$field-7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF00);
	}
	template <typename T = uintptr_t> static T& $$field-8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1300);
	}
	template <typename T = uintptr_t> static T& $$field-9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1700);
	}
	template <typename T = uintptr_t> static T& $$field-10() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B00);
	}
	template <typename T = uintptr_t> static T& $$field-11() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F00);
	}


};

}
