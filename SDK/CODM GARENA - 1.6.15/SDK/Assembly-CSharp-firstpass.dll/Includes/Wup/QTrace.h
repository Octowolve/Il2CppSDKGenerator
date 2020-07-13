#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Wup {

class QTrace
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "Wup", "QTrace"));
	}


	template <typename T = void> static T Trace(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4F8B184))(0, value);
	}
	template <typename T = void> static T Trace_1(Il2CppString* value, uintptr_t arg) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4F96358))(0, value, arg);
	}
	template <typename T = Il2CppString*> static T Trace_2(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F96440))(0, value);
	}
	template <typename T = void> static T Trace_3(uintptr_t dict) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4F9663C))(0, dict);
	}
	template <typename T = void> static T Trace_4(uintptr_t list) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4F96BA0))(0, list);
	}
	template <typename T = void> static T Assert(bool condition) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4F96F5C))(0, condition);
	}
	template <typename T = Il2CppString*> static T Output(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F96F68))(0, value);
	}

};

}
