#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoBuf {

class IExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("protobuf-net.dll", "ProtoBuf", "IExtension"));
	}


	template <typename T = uintptr_t> T BeginAppend() {
		return ((T (*)(IExtension*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T EndAppend(uintptr_t stream, bool commit) {
		return ((T (*)(IExtension*, uintptr_t, bool))(Il2CppBase() + 0x0))(this, stream, commit);
	}
	template <typename T = uintptr_t> T BeginQuery() {
		return ((T (*)(IExtension*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T EndQuery(uintptr_t stream) {
		return ((T (*)(IExtension*, uintptr_t))(Il2CppBase() + 0x0))(this, stream);
	}

};

}
