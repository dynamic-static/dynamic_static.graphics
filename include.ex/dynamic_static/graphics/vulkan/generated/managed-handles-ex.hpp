namespace dst {
namespace gfx {
namespace vk {

#ifdef ENABLE_FOO
template <>
class Handle<Foo> final
{
public:
    HandleFoo() = default;
    HandleFoo(uint32_t widgetCount, cont Widget* pWidgets);
    $<GET_PARENT_FUNCTIONS>
    const std::shared_ptr<Handle<${PARENT_VK_HANDLE_TYPE}>& get_${PARENT_NAME}() const;
    $</GET_PARENT_FUNCTIONS>
    $<GET_CREATE_INFO_FUNCTIONS>
    const ${VK_CREATE_INFO_TYPE}& get_${VK_CREATE_INFO_NAME}() const;
    $</GET_CREATE_INFO_FUNCTIONS>
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override final;
protected:
    $<MEMBERS>
    ${MEMBER_TYPE} ${MEMBER_NAME} = { };
    $</MEMBERS>
};
#endif // ENABLE_FOO

#ifdef ENABLE_BAR
#ifdef WINDOWS
template <>
class Handle<Bar> final
{
public:
    HandleBar() = default;
    HandleBar(const char* pStr);
    $<GET_PARENT_FUNCTIONS>
    const std::shared_ptr<Handle<${PARENT_VK_HANDLE_TYPE}>& get_${PARENT_NAME}() const;
    $</GET_PARENT_FUNCTIONS>
    $<GET_CREATE_INFO_FUNCTIONS>
    const ${VK_CREATE_INFO_TYPE}& get_${VK_CREATE_INFO_NAME}() const;
    $</GET_CREATE_INFO_FUNCTIONS>
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override final;
protected:
    $<MEMBERS>
    ${MEMBER_TYPE} ${MEMBER_NAME} = { };
    $</MEMBERS>
};
#endif // WINDOWS
#endif // ENABLE_BAR

template <>
class Handle<Baz> final
{
public:
    HandleBaz() = default;
    HandleBaz();
    $<GET_PARENT_FUNCTIONS>
    const std::shared_ptr<Handle<${PARENT_VK_HANDLE_TYPE}>& get_${PARENT_NAME}() const;
    $</GET_PARENT_FUNCTIONS>
    $<GET_CREATE_INFO_FUNCTIONS>
    const ${VK_CREATE_INFO_TYPE}& get_${VK_CREATE_INFO_NAME}() const;
    $</GET_CREATE_INFO_FUNCTIONS>
    virtual void reset(const VkAllocationCallbacks* pAllocator = nullptr) override final;
protected:
    $<MEMBERS>
    ${MEMBER_TYPE} ${MEMBER_NAME} = { };
    $</MEMBERS>
};

} // namespace vk
} // namespace gfx
} // namespace dst
