#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSDscIPGroupNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSDscIPGroupNtf"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _group_info() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_group_info() {
		return ((T (*)(CSDscIPGroupNtf*))(Il2CppBase() + 0x51D1758))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSDscIPGroupNtf*, bool))(Il2CppBase() + 0x51D1760))(this, createIfMissing);
	}

};

}
