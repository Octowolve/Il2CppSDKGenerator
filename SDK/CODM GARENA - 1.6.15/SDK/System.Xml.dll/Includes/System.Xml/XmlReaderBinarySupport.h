#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlReaderBinarySupport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlReaderBinarySupport"));
	}

	template <typename T = uintptr_t> T& reader() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& base64CacheStartsAt() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& hasCache() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& dontReset() {
		return *(T*)((uintptr_t)this + 0x15);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(XmlReaderBinarySupport*))(Il2CppBase() + 0x37E5ADC))(this);
	}

};

}
