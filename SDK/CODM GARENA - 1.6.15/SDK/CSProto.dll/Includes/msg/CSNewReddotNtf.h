#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSNewReddotNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSNewReddotNtf"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_data() {
		return ((T (*)(CSNewReddotNtf*))(Il2CppBase() + 0x51F0EEC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSNewReddotNtf*, bool))(Il2CppBase() + 0x51F0EF4))(this, createIfMissing);
	}

};

}
