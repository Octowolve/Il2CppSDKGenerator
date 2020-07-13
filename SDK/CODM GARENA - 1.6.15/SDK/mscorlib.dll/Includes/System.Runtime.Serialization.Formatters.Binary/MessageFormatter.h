#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization.Formatters.Binary {

class MessageFormatter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization.Formatters.Binary", "MessageFormatter"));
	}


	template <typename T = void> static T WriteMethodCall(uintptr_t writer, uintptr_t obj, Il2CppArray<uintptr_t>* headers, uintptr_t surrogateSelector, uintptr_t context, uintptr_t assemblyFormat, uintptr_t typeFormat) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3019B4C))(0, writer, obj, headers, surrogateSelector, context, assemblyFormat, typeFormat);
	}
	template <typename T = void> static T WriteMethodResponse(uintptr_t writer, uintptr_t obj, Il2CppArray<uintptr_t>* headers, uintptr_t surrogateSelector, uintptr_t context, uintptr_t assemblyFormat, uintptr_t typeFormat) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x301AB08))(0, writer, obj, headers, surrogateSelector, context, assemblyFormat, typeFormat);
	}
	template <typename T = uintptr_t> static T ReadMethodCall(uintptr_t elem, uintptr_t reader, bool hasHeaders, uintptr_t headerHandler, uintptr_t formatter) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x3017C44))(0, elem, reader, hasHeaders, headerHandler, formatter);
	}
	template <typename T = uintptr_t> static T ReadMethodResponse(uintptr_t elem, uintptr_t reader, bool hasHeaders, uintptr_t headerHandler, uintptr_t methodCallMessage, uintptr_t formatter) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3018934))(0, elem, reader, hasHeaders, headerHandler, methodCallMessage, formatter);
	}
	template <typename T = bool> static T AllTypesArePrimitive(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3022730))(0, objects);
	}
	template <typename T = bool> static T IsMethodPrimitive(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3022FA4))(0, type);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetExtraProperties(uintptr_t properties, Il2CppArray<uintptr_t>* internalKeys) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30221D8))(0, properties, internalKeys);
	}
	template <typename T = bool> static T IsInternalKey(Il2CppString* key, Il2CppArray<uintptr_t>* internalKeys) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3023980))(0, key, internalKeys);
	}

};

}
