#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip.Compression {

class InflaterDynHeader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip.Compression", "InflaterDynHeader"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& MetaCodeLengthIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& input() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& state() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& stateMachine() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& codeLengths() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& litLenTree() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& distTree() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& litLenCodeCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& distanceCodeCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& metaCodeCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = bool> T AttemptRead() {
		return ((T (*)(InflaterDynHeader*))(Il2CppBase() + 0x4A77760))(this);
	}
	template <typename T = void*> T CreateStateMachine() {
		return ((T (*)(InflaterDynHeader*))(Il2CppBase() + 0x4A78390))(this);
	}
	template <typename T = uintptr_t> T get_LiteralLengthTree() {
		return ((T (*)(InflaterDynHeader*))(Il2CppBase() + 0x4A778EC))(this);
	}
	template <typename T = uintptr_t> T get_DistanceTree() {
		return ((T (*)(InflaterDynHeader*))(Il2CppBase() + 0x4A779A4))(this);
	}

};

}
