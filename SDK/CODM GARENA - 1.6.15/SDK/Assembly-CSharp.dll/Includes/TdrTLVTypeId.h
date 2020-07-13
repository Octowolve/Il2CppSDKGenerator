#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TdrTLVTypeId
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TdrTLVTypeId"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& TDR_TYPE_ID_VARINT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& TDR_TYPE_ID_1_BYTE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& TDR_TYPE_ID_2_BYTE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& TDR_TYPE_ID_4_BYTE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& TDR_TYPE_ID_8_BYTE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& TDR_TYPE_ID_LENGTH_DELIMITED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
