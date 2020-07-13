#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Dolphin {

class FirstExtracttype
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Dolphin", "First_Extract_type"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& m_type_extract_all() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& m_type_extract_part_resource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& m_type_extract_fixToAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
