#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class AwardItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "AwardItem"));
	}

	template <typename T = uint64_t> T& _award_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _award_num() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _award_durable() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_award_id() {
		return ((T (*)(AwardItem*))(Il2CppBase() + 0x510C7DC))(this);
	}
	template <typename T = void> T set_award_id(uint64_t value) {
		return ((T (*)(AwardItem*, uint64_t))(Il2CppBase() + 0x510C7E4))(this, value);
	}
	template <typename T = int32_t> T get_award_num() {
		return ((T (*)(AwardItem*))(Il2CppBase() + 0x510C7F4))(this);
	}
	template <typename T = void> T set_award_num(int32_t value) {
		return ((T (*)(AwardItem*, int32_t))(Il2CppBase() + 0x510C7FC))(this, value);
	}
	template <typename T = int32_t> T get_award_durable() {
		return ((T (*)(AwardItem*))(Il2CppBase() + 0x510C804))(this);
	}
	template <typename T = void> T set_award_durable(int32_t value) {
		return ((T (*)(AwardItem*, int32_t))(Il2CppBase() + 0x510C80C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(AwardItem*, bool))(Il2CppBase() + 0x510C814))(this, createIfMissing);
	}

};

}
