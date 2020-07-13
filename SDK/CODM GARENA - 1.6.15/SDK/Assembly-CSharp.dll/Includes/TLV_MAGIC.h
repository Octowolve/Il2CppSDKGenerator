#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TLVMAGIC
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TLV_MAGIC"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& TLV_MAGIC_VARINT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& TLV_MAGIC_NOVARINT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
