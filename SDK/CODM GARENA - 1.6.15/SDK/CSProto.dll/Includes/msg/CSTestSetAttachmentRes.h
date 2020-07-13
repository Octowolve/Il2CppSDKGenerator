#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSTestSetAttachmentRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSTestSetAttachmentRes"));
	}

	template <typename T = int32_t> T& _Result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_Result() {
		return ((T (*)(CSTestSetAttachmentRes*))(Il2CppBase() + 0x51B62B0))(this);
	}
	template <typename T = void> T set_Result(int32_t value) {
		return ((T (*)(CSTestSetAttachmentRes*, int32_t))(Il2CppBase() + 0x51B62B8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSTestSetAttachmentRes*, bool))(Il2CppBase() + 0x51B62C0))(this, createIfMissing);
	}

};

}
