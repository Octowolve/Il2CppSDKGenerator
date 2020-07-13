#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoBuf.Meta {

class MutableList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("protobuf-net.dll", "ProtoBuf.Meta", "MutableList"));
	}


	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(MutableList*, int32_t))(Il2CppBase() + 0x5061B00))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(MutableList*, int32_t, uintptr_t))(Il2CppBase() + 0x5061B28))(this, index, value);
	}
	template <typename T = void> T RemoveLast() {
		return ((T (*)(MutableList*))(Il2CppBase() + 0x5061B50))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(MutableList*))(Il2CppBase() + 0x5061B78))(this);
	}

};

}
