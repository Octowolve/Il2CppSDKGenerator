#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChapterUpdateOneChapterRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChapterUpdateOneChapterRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSChapterUpdateOneChapterRes*))(Il2CppBase() + 0x51CFB28))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSChapterUpdateOneChapterRes*, int32_t))(Il2CppBase() + 0x51CFB30))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChapterUpdateOneChapterRes*, bool))(Il2CppBase() + 0x51CFB38))(this, createIfMissing);
	}

};

}
