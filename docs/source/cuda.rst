torch.cuda
===================================
.. automodule:: torch.cuda
.. currentmodule:: torch.cuda

.. autosummary::
    :toctree: generated
    :nosignatures:

    StreamContext
    can_device_access_peer
    current_blas_handle
    current_device
    current_stream
    default_stream
    device
    device_count
    device_of
    get_arch_list
    get_device_capability
    get_device_name
    get_device_properties
    get_gencode_flags
    get_sync_debug_mode
    init
    ipc_collect
    is_available
    is_initialized
    memory_usage
    set_device
    set_stream
    set_sync_debug_mode
    stream
    synchronize
    utilization

Random Number Generator
-------------------------
.. autosummary::
    :toctree: generated
    :nosignatures:

    get_rng_state
    get_rng_state_all
    set_rng_state
    set_rng_state_all
    manual_seed
    manual_seed_all
    seed
    seed_all
    initial_seed


Communication collectives
-------------------------

.. autosummary::
    :toctree: generated
    :nosignatures:

    comm.broadcast
    comm.broadcast_coalesced
    comm.reduce_add
    comm.scatter
    comm.gather

Streams and events
------------------
.. autosummary::
    :toctree: generated
    :nosignatures:

    Stream
    ExternalStream
    Event

Graphs (beta)
-------------
.. autosummary::
    :toctree: generated
    :nosignatures:

    graph_pool_handle
    CUDAGraph
    graph
    make_graphed_callables

Memory management
-----------------
.. autosummary::
    :toctree: generated
    :nosignatures:

     empty_cache
     list_gpu_processes
     mem_get_info
     memory_stats
     memory_summary
     memory_snapshot
     memory_allocated
     max_memory_allocated
     reset_max_memory_allocated
     memory_reserved
     max_memory_reserved
     set_per_process_memory_fraction
     memory_cached
     max_memory_cached
     reset_max_memory_cached
     reset_peak_memory_stats
     caching_allocator_alloc
     caching_allocator_delete
.. FIXME The following doesn't seem to exist. Is it supposed to?
   https://github.com/pytorch/pytorch/issues/27785
   .. autofunction:: reset_max_memory_reserved

NVIDIA Tools Extension (NVTX)
-----------------------------

.. autosummary::
    :toctree: generated
    :nosignatures:

    nvtx.mark
    nvtx.range_push
    nvtx.range_pop

Jiterator (beta)
-----------------------------
.. autosummary::
    :toctree: generated
    :nosignatures:

    jiterator._create_jit_fn
