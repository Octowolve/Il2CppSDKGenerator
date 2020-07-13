#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AsyncLoadBundleThreadedcIterator4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AsyncLoadBundleThreaded>c__Iterator4"));
	}

	template <typename T = bool> T& enableSyncAB__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& abEx() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& offset__1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& bundlePath__1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& asyncOP__1() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& startGen__1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& frameCount__1() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(AsyncLoadBundleThreadedcIterator4*))(Il2CppBase() + 0x2B75374))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(AsyncLoadBundleThreadedcIterator4*))(Il2CppBase() + 0x2B76334))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(AsyncLoadBundleThreadedcIterator4*))(Il2CppBase() + 0x2B7633C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AsyncLoadBundleThreadedcIterator4*))(Il2CppBase() + 0x2B76344))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AsyncLoadBundleThreadedcIterator4*))(Il2CppBase() + 0x2B76358))(this);
	}

};

}
