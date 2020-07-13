#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip {

class ZipStrings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip", "ZipStrings"));
	}

	template <typename T = int32_t> static T& codePage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SystemDefaultCodePage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> static T get_CodePage() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A8ACFC))(0);
	}
	template <typename T = int32_t> static T get_SystemDefaultCodePage() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A8AE5C))(0);
	}
	template <typename T = bool> static T get_UseUnicode() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A805E4))(0);
	}
	template <typename T = Il2CppString*> static T ConvertToString(Il2CppArray<uintptr_t>* data, int32_t count) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4A8AF0C))(0, data, count);
	}
	template <typename T = Il2CppString*> static T ConvertToString_1(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4A85EF8))(0, data);
	}
	template <typename T = uintptr_t> static T EncodingFromFlag(int32_t flags) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4A8B098))(0, flags);
	}
	template <typename T = Il2CppString*> static T ConvertToStringExt(int32_t flags, Il2CppArray<uintptr_t>* data, int32_t count) {
		return ((T (*)(void *, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4A85FB0))(0, flags, data, count);
	}
	template <typename T = Il2CppString*> static T ConvertToStringExt_1(int32_t flags, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4A858B0))(0, flags, data);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ConvertToArray(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4A7A4BC))(0, str);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ConvertToArray_1(int32_t flags, Il2CppString* str) {
		return ((T (*)(void *, int32_t, Il2CppString*))(Il2CppBase() + 0x4A89834))(0, flags, str);
	}

};

}
