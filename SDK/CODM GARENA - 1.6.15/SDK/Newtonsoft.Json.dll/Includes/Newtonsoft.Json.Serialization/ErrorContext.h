#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class ErrorContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "ErrorContext"));
	}

	template <typename T = bool> T& Traced() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Error() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& OriginalObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Member() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Path() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& Handled() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = bool> T get_Traced() {
		return ((T (*)(ErrorContext*))(Il2CppBase() + 0x3988704))(this);
	}
	template <typename T = void> T set_Traced(bool value) {
		return ((T (*)(ErrorContext*, bool))(Il2CppBase() + 0x398870C))(this, value);
	}
	template <typename T = uintptr_t> T get_Error() {
		return ((T (*)(ErrorContext*))(Il2CppBase() + 0x3988714))(this);
	}
	template <typename T = void> T set_Error(uintptr_t value) {
		return ((T (*)(ErrorContext*, uintptr_t))(Il2CppBase() + 0x39886F4))(this, value);
	}
	template <typename T = void> T set_OriginalObject(uintptr_t value) {
		return ((T (*)(ErrorContext*, uintptr_t))(Il2CppBase() + 0x39886E4))(this, value);
	}
	template <typename T = void> T set_Member(uintptr_t value) {
		return ((T (*)(ErrorContext*, uintptr_t))(Il2CppBase() + 0x39886EC))(this, value);
	}
	template <typename T = void> T set_Path(Il2CppString* value) {
		return ((T (*)(ErrorContext*, Il2CppString*))(Il2CppBase() + 0x39886FC))(this, value);
	}
	template <typename T = bool> T get_Handled() {
		return ((T (*)(ErrorContext*))(Il2CppBase() + 0x398871C))(this);
	}

};

}
