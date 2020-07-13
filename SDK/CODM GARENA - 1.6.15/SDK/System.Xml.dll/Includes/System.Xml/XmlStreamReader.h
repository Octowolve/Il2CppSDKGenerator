#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlStreamReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlStreamReader"));
	}

	template <typename T = uintptr_t> T& input() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& invalidDataException() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Close() {
		return ((T (*)(XmlStreamReader*))(Il2CppBase() + 0x4CF57EC))(this);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>** dest_buffer, int32_t index, int32_t count) {
		return ((T (*)(XmlStreamReader*, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x4CF5820))(this, dest_buffer, index, count);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(XmlStreamReader*, bool))(Il2CppBase() + 0x4CF59A8))(this, disposing);
	}

};

}
