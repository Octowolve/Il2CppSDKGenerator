#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions {

class QuickSearch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions", "QuickSearch"));
	}

	template <typename T = Il2CppString*> T& str() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& len() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& ignore() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& reverse() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& shift() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& shiftExtended() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& THRESHOLD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_Length() {
		return ((T (*)(QuickSearch*))(Il2CppBase() + 0x4AD6D40))(this);
	}
	template <typename T = int32_t> T Search(Il2CppString* text, int32_t start, int32_t end) {
		return ((T (*)(QuickSearch*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x4AD6A6C))(this, text, start, end);
	}
	template <typename T = void> T SetupShiftTable() {
		return ((T (*)(QuickSearch*))(Il2CppBase() + 0x4ADBB1C))(this);
	}
	template <typename T = int32_t> T GetShiftDistance(char c) {
		return ((T (*)(QuickSearch*, char))(Il2CppBase() + 0x4ADBED8))(this, c);
	}
	template <typename T = char> T GetChar(char c) {
		return ((T (*)(QuickSearch*, char))(Il2CppBase() + 0x4ADBE18))(this, c);
	}

};

}
