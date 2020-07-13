#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Linq {

class XDocumentType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.Linq.dll", "System.Xml.Linq", "XDocumentType"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& pubid() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& sysid() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& intSubset() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XDocumentType*))(Il2CppBase() + 0x51C6A60))(this);
	}
	template <typename T = Il2CppString*> T get_PublicId() {
		return ((T (*)(XDocumentType*))(Il2CppBase() + 0x51C6A68))(this);
	}
	template <typename T = Il2CppString*> T get_SystemId() {
		return ((T (*)(XDocumentType*))(Il2CppBase() + 0x51C6A70))(this);
	}
	template <typename T = Il2CppString*> T get_InternalSubset() {
		return ((T (*)(XDocumentType*))(Il2CppBase() + 0x51C6A78))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XDocumentType*))(Il2CppBase() + 0x51C6A80))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t w) {
		return ((T (*)(XDocumentType*, uintptr_t))(Il2CppBase() + 0x51C6A88))(this, w);
	}

};

}
