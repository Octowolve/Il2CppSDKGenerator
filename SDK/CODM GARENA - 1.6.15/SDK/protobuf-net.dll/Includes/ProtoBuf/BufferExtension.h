#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoBuf {

class BufferExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("protobuf-net.dll", "ProtoBuf", "BufferExtension"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& buffer() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T ProtoBuf_IExtension_BeginAppend() {
		return ((T (*)(BufferExtension*))(Il2CppBase() + 0x505FBEC))(this);
	}
	template <typename T = void> T ProtoBuf_IExtension_EndAppend(uintptr_t stream, bool commit) {
		return ((T (*)(BufferExtension*, uintptr_t, bool))(Il2CppBase() + 0x505FC78))(this, stream, commit);
	}
	template <typename T = uintptr_t> T ProtoBuf_IExtension_BeginQuery() {
		return ((T (*)(BufferExtension*))(Il2CppBase() + 0x505FF8C))(this);
	}
	template <typename T = void> T ProtoBuf_IExtension_EndQuery(uintptr_t stream) {
		return ((T (*)(BufferExtension*, uintptr_t))(Il2CppBase() + 0x5060084))(this, stream);
	}

};

}
