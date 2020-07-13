#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq {

class JsonLoadSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq", "JsonLoadSettings"));
	}

	template <typename T = uintptr_t> T& _commentHandling() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _lineInfoHandling() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_CommentHandling() {
		return ((T (*)(JsonLoadSettings*))(Il2CppBase() + 0x3961374))(this);
	}
	template <typename T = uintptr_t> T get_LineInfoHandling() {
		return ((T (*)(JsonLoadSettings*))(Il2CppBase() + 0x396137C))(this);
	}

};

}
