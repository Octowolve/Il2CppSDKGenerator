#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class ApolloBufferBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "ApolloBufferBase"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Encode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Encode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Decode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Decode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeforeEncode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeforeDecode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T Encode(Il2CppArray<uintptr_t>** buffer) {
		return ((T (*)(ApolloBufferBase*, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x4514DFC))(this, buffer);
	}
	template <typename T = bool> T Encode_1(uintptr_t writer) {
		return ((T (*)(ApolloBufferBase*, uintptr_t))(Il2CppBase() + 0x45152D0))(this, writer);
	}
	template <typename T = bool> T Decode(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(ApolloBufferBase*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x451545C))(this, data);
	}
	template <typename T = bool> T Decode_1(uintptr_t reader) {
		return ((T (*)(ApolloBufferBase*, uintptr_t))(Il2CppBase() + 0x45156C8))(this, reader);
	}
	template <typename T = void> T WriteTo(uintptr_t writer) {
		return ((T (*)(ApolloBufferBase*, uintptr_t))(Il2CppBase() + 0x0))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(ApolloBufferBase*, uintptr_t))(Il2CppBase() + 0x0))(this, reader);
	}
	template <typename T = void> T BeforeEncode(uintptr_t writer) {
		return ((T (*)(ApolloBufferBase*, uintptr_t))(Il2CppBase() + 0x4515854))(this, writer);
	}
	template <typename T = void> T BeforeDecode(uintptr_t reader) {
		return ((T (*)(ApolloBufferBase*, uintptr_t))(Il2CppBase() + 0x45158F4))(this, reader);
	}

};

}
